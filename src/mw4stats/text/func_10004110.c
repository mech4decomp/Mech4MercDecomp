/*
 * MW4Stats.dll - FUN_10004110 (0x10004110, 47 B, __thiscall)
 * If FUN_10002fc0(param)!=0: u=FUN_10002fc0(param); p=FUN_10004140(param);
 * FUN_100016b0(this,p,u). RET 0x4.
 * Transcribed from MW4Stats.dll reference bytes.
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_10004110 (47 B, __thiscall, RET 0x4) -- if (*(arg1+0xc) > 0) then
 * FUN_100016b0(this, *(int*)arg1, *(arg1+0xc)).
 * if (FUN_10002fc0(arg1) > 0) {
 * ((Buf*)this)->run(FUN_10004140(arg1), FUN_10002fc0(arg1));
 * CFLAGS: /O2
 */
extern void __cdecl FUN_10002fc0(void);
extern void __cdecl FUN_10004140(void);
extern void __cdecl FUN_100016b0(void);

__declspec(naked) void FUN_10004110(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        mov     edi, ecx
        mov     ecx, esi
        call    FUN_10002fc0
        test    eax, eax
        jbe     L1
        mov     ecx, esi
        call    FUN_10002fc0
        push    eax
        mov     ecx, esi
        call    FUN_10004140
        push    eax
        mov     ecx, edi
        call    FUN_100016b0
L1:
        pop     edi
        pop     esi
        ret     0x4
    }
}
