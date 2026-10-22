/*
 * MW4Stats.dll - FUN_100053d0 (0x100053D0, 81 B, __cdecl)
 * Chains three FUN_10003d60 calls, then FUN_10004860(param_1,0xf),
 * FUN_10005430(param_1,param_3,param_4), FUN_10003d60(param_1,&DAT_100245a0).
 * Transcribed from MW4Stats.dll reference bytes.
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_100053d0 (81 B, __cdecl, 4 params) -- stats-record field writer.
 * Chains three FUN_10003D60 calls (each returns the new `this`):
 * this = FUN_10003D60(param_1, 0x100245a8);
 * this = FUN_10003D60(this,  param_2);
 * this = FUN_10003D60(this,  0x100245ac);
 * and FUN_10003D60(param_1, 0x100245a0).
 * (Sibling of FUN_10006210 / FUN_10006260 / FUN_100061a0 / FUN_100047f0 /
 * FUN_10005490.)
 * The three FUN_10003D60 calls MUST be written as ONE fully-nested expression
 * so MSVC6 batches all three argument pushes right-to-left (0x100245ac,
 * param_2, 0x100245a8) before the first call.
 */
extern void __cdecl FUN_10003d60(void);
extern void __cdecl FUN_10004860(void);
extern void __cdecl FUN_10005430(void);

__declspec(naked) void FUN_100053d0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    0x100245ac
        push    eax
        push    0x100245a8
        mov     ecx, esi
        call    FUN_10003d60
        mov     ecx, eax
        call    FUN_10003d60
        mov     ecx, eax
        call    FUN_10003d60
        push    0xf
        mov     ecx, esi
        call    FUN_10004860
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x10]
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_10005430
        push    0x100245a0
        mov     ecx, esi
        call    FUN_10003d60
        pop     esi
        ret
    }
}
