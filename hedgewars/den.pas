while (((HHGear^.Message) = 0) or ((GameTicks mod 5) = 1)) do
    begin
    while ((HHGear^.Message) <> 0) and (HHGear^.Angle + da <= CurMaxAngle) do 
        begin
        GetTime(hour,minute,time);
        if time mod 1 = 0 then inc(HHGear^.Angle, da)
        end; 
    while ((HHGear^.Message) <> 0) and (HHGear^.Angle - da >= CurMinAngle) do 
        begin
        GetTime(hour,minute,time);
        if time mod 1 = 0 then dec(HHGear^.Angle, da)
        end; 
    end;
end;
