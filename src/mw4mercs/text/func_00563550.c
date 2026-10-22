// 0x00563550: format string into a circular buffer (4 slots of 0x4000 bytes each)
// __cdecl, 2 params (char *fmt, va_list args)
// Returns pointer to formatted string in the circular buffer

#include <stdarg.h>

__declspec(naked) char *__cdecl func_00563550(const char *fmt, ...)
{
    

extern int DAT_007eebd0;
extern int DAT_0076b3ec;
__asm {
mov ecx, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [DAT_007eebd0]
        lea eax, [esp + 0xc]
        push eax
        shl esi, 0xe
        push ecx
        add esi, 0x7DE7B8
        push esi
        call dword ptr [DAT_0076b3ec]
        mov edx, dword ptr [DAT_007eebd0]
        add esp, 0xc
        inc edx
        and edx, 0x80000003
        jns skip_signfix
        dec edx
        or  edx, 0xfffffffc
        inc edx
skip_signfix:
        mov eax, esi
        mov dword ptr [DAT_007eebd0], edx
        pop esi
        ret
    }


}
