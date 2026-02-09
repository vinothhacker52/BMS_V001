classdef enumCellVoltState < Simulink.IntEnumType
    enumeration
        NORMAL   (0)
        WARNING  (1)
        DERATE   (2)
        CUT_OFF  (3)
    end
end
