/*
 * FUN_0060d510 (53 B) — Decrement a reference count on a sub-object;
 * release it when the count drops below 1 (but not -1).
 *
 * __thiscall (ECX = this), RET 4 (one stack arg).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416b60(void);

__declspec(naked) void __stdcall FUN_0060d510(void *arg)
{
    __asm {
        lea     eax, [esp + 0x4]
        push    eax
        add     ecx, 0x18
        call    FUN_00416b60
        test    eax, eax
        jz      L_done
        mov     ecx, dword ptr [eax + 0x1C]
        cmp     ecx, 0x1
        jl      L_lt1
        cmp     ecx, -0x1
        jz      L_done
        dec     ecx
        mov     dword ptr [eax + 0x1C], ecx
        ret     0x4
L_lt1:
        cmp     ecx, -0x1
        jz      L_done
        mov     edx, dword ptr [eax]
        push    0x1
        mov     ecx, eax
        call    dword ptr [edx]
L_done:
        ret     0x4
    }
}
