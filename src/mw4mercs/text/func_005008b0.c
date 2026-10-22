// Auto-generated: stack alloc 0x190 + memset to 0
// FUN_005008b0, 28 bytes

#include <string.h>

__declspec(naked) void func_005008b0(void)
{
    
__asm {
sub esp, 0x190
        // lea eax, [esp+0]  -- use __emit to avoid optimization to lea eax,[esp]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        push eax
        push 0x101
        call memset
        add esp, 0x190
        ret
    }


}
