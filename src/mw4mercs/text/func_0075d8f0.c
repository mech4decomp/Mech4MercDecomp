/*
 * FUN_0075d8f0 (53 B) — __thiscall (ECX = this) teardown helper.
 *
 * If this->[0xc] is non-null: calls FUN_006f4940(DAT_008492fc,
 * this->[4] * *this * -4, 1), calls FUN_00740db0(this->[0xc]), and
 * clears this->[0xc].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8492fc;                 /* DAT_008492fc */
extern void __stdcall FUN_006f4940(int a, int b, int c);
extern void __stdcall FUN_00740db0(void *p);

__declspec(naked) void FUN_0075d8f0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi + 0xc]
        test    edi, edi
        jz      done
        mov     eax, dword ptr [esi + 4]
        imul    eax, dword ptr [esi]
        mov     ecx, dword ptr [g_8492fc]
        neg     eax
        push    1
        shl     eax, 2
        push    eax
        push    ecx
        call    FUN_006f4940
        push    edi
        call    FUN_00740db0
        mov     dword ptr [esi + 0xc], 0
done:
        pop     edi
        pop     esi
        ret
    }
}
