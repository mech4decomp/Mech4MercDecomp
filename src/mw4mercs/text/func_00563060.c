/*
 * FUN_00563060 (315 B) — ABL runtime error handler.
 *
 * Formats runtime error messages via sprintf and outputs them through
 * the log system (FUN_0061fc80) and the error output function (FUN_00562f10).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

/* __thiscall: ECX = log object, stack = string, callee cleans up (ret 4) */
extern void __stdcall FUN_0061fc80(const char *str);

/* __fastcall: ECX = log object */
extern void __fastcall FUN_00621280(void *obj);

/* __thiscall: ECX = module object, stack = index, callee cleans up (ret 4) */
extern void *__stdcall FUN_0064c3d0(int index);

/* __cdecl: caller cleans up */
extern void __cdecl FUN_00562f10(int param1, const char *str);

__declspec(naked) void __cdecl FUN_00563060(int param_1)
{
    
__asm {
/* __emit: mov eax, [0x007f2ba8] */
        _emit 0xA1
        _emit 0xA8
        _emit 0x2B
        _emit 0x7F
        _emit 0x00

        sub     esp, 0x200
        test    eax, eax
        push    esi

        /* __emit: mov esi, [0x0076b420] */
        _emit 0x8B
        _emit 0x35
        _emit 0x20
        _emit 0xB4
        _emit 0x76
        _emit 0x00

        push    edi
        mov     edi, dword ptr [esp + 0x20c]
        jz      label_skip_log

        mov     eax, dword ptr [edi*4 + 0x007b520c]
        push    eax
        push    edi
        lea     ecx, [esp + 0x10]
        push    0x0077e7b4
        push    ecx
        call    esi                             /* sprintf */

        /* __emit: mov ecx, [0x007f2ba8] (before add esp cleanup) */
        _emit 0x8B
        _emit 0x0D
        _emit 0xA8
        _emit 0x2B
        _emit 0x7F
        _emit 0x00

        add     esp, 0x10
        lea     edx, [esp + 8]
        push    edx
        call    FUN_0061fc80                    /* __thiscall, callee cleans up */

        /* __emit: mov eax, [0x0080d984] */
        _emit 0xA1
        _emit 0x84
        _emit 0xD9
        _emit 0x80
        _emit 0x00

        add     eax, 4
        push    eax
        lea     ecx, [esp + 0x0c]
        push    0x0077e7a8
        push    ecx
        call    esi                             /* sprintf */

        /* __emit: mov ecx, [0x007f2ba8] (before add esp cleanup) */
        _emit 0x8B
        _emit 0x0D
        _emit 0xA8
        _emit 0x2B
        _emit 0x7F
        _emit 0x00

        add     esp, 0x0c
        lea     edx, [esp + 8]
        push    edx
        call    FUN_0061fc80                    /* __thiscall, callee cleans up */

        /* __emit: mov eax, [0x008058cc] */
        _emit 0xA1
        _emit 0xCC
        _emit 0x58
        _emit 0x80
        _emit 0x00

        cmp     eax, -1
        jle     label_file_unavail

        /* __emit: mov ecx, [0x0080d984] */
        _emit 0x8B
        _emit 0x0D
        _emit 0x84
        _emit 0xD9
        _emit 0x80
        _emit 0x00

        push    eax
        call    FUN_0064c3d0                    /* __thiscall, callee cleans up */
        push    eax
        lea     eax, [esp + 0x0c]
        push    0x0077e7a0
        push    eax
        call    esi                             /* sprintf */
        add     esp, 0x0c
        jmp     label_file_done

label_file_unavail:
        lea     ecx, [esp + 8]
        push    0x0077e788
        push    ecx
        call    esi                             /* sprintf */
        add     esp, 8

label_file_done:
        /* __emit: mov ecx, [0x007f2ba8] */
        _emit 0x8B
        _emit 0x0D
        _emit 0xA8
        _emit 0x2B
        _emit 0x7F
        _emit 0x00

        lea     edx, [esp + 8]
        push    edx
        call    FUN_0061fc80                    /* __thiscall, callee cleans up */

        /* __emit: mov eax, [0x00805904] */
        _emit 0xA1
        _emit 0x04
        _emit 0x59
        _emit 0x80
        _emit 0x00

        push    eax
        lea     ecx, [esp + 0x0c]
        push    0x0077e780
        push    ecx
        call    esi                             /* sprintf */

        /* __emit: mov ecx, [0x007f2ba8] (before add esp cleanup) */
        _emit 0x8B
        _emit 0x0D
        _emit 0xA8
        _emit 0x2B
        _emit 0x7F
        _emit 0x00

        add     esp, 0x0c
        lea     edx, [esp + 8]
        push    edx
        call    FUN_0061fc80                    /* __thiscall, callee cleans up */

        /* __emit: mov ecx, [0x007f2ba8] */
        _emit 0x8B
        _emit 0x0D
        _emit 0xA8
        _emit 0x2B
        _emit 0x7F
        _emit 0x00

        call    FUN_00621280                    /* __fastcall, ECX = param */

label_skip_log:
        /* __emit: mov eax, [0x008058cc] */
        _emit 0xA1
        _emit 0xCC
        _emit 0x58
        _emit 0x80
        _emit 0x00

        cmp     eax, -1
        jle     label_file_unavail2

        /* __emit: mov ecx, [0x0080d984] */
        _emit 0x8B
        _emit 0x0D
        _emit 0x84
        _emit 0xD9
        _emit 0x80
        _emit 0x00

        push    eax
        call    FUN_0064c3d0                    /* __thiscall, callee cleans up */
        jmp     label_file_done2

label_file_unavail2:
        mov     eax, 0x0077e774

label_file_done2:
        mov     ecx, dword ptr [edi*4 + 0x007b520c]
        /* __emit: mov edx, [0x00805904] */
        _emit 0x8B
        _emit 0x15
        _emit 0x04
        _emit 0x59
        _emit 0x80
        _emit 0x00

        push    ecx
        push    edi
        push    edx
        push    eax
        lea     eax, [esp + 0x18]
        push    0x0077e744
        push    eax
        call    esi                             /* sprintf */

        lea     ecx, [esp + 0x20]
        push    ecx
        push    -8
        call    FUN_00562f10
        add     esp, 0x20

        pop     edi
        pop     esi
        add     esp, 0x200
        ret
    }


}
