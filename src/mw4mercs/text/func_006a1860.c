/*
 * FUN_006A1860 (65 B) — __fastcall (ECX = param_1).
 * Decrements a counter at +0x18 and updates a float at +0x1c based on
 * a random value from FUN_00707e70.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float __cdecl FUN_00707e70(int);
extern float g_77dea8;

__declspec(naked) void __fastcall FUN_006a1860(void)
{
    __asm {
        sub     esp, 0x8
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi + 0x18]
        test    edi, edi
        jle     l_done
        fld     dword ptr [esi + 0x1c]
        push    0x0
        fadd    dword ptr [g_77dea8]
        fstp    qword ptr [esp + 0xc]
        call    FUN_00707e70
        fcomp   qword ptr [esp + 0x8]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_done
        dec     edi
        push    0x0
        mov     dword ptr [esi + 0x18], edi
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x1c]
    l_done:
        pop     edi
        pop     esi
        add     esp, 0x8
        ret
    }
}
