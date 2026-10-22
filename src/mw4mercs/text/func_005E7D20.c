/*
 * FUN_005E7D20 (65 B) — __thiscall (RET 0x8). Calls FUN_005FBC40(edi,
 * arg0); if [this+0x2fc] is nonzero, builds a small struct from
 * [edi+0x18]/[edi+0x1a], calls FUN_005E8160(this, &struct), then
 * FUN_005FD1F0(this, result).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005fbc40(void);
extern void __cdecl FUN_005e8160(void);
extern void __cdecl FUN_005fd1f0(void);

__declspec(naked) void FUN_005E7D20(void)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        push    eax
        mov     esi, ecx
        push    edi
        call    FUN_005fbc40
        mov     eax, dword ptr [esi + 0x2fc]
        test    eax, eax
        je      L_5e7d5c
        mov     dx, word ptr [edi + 0x1a]
        push    ecx
        mov     cl, byte ptr [edi + 0x18]
        mov     eax, esp
        mov     byte ptr [eax], cl
        mov     ecx, esi
        mov     word ptr [eax + 2], dx
        call    FUN_005e8160
        push    eax
        mov     ecx, esi
        call    FUN_005fd1f0
L_5e7d5c:
        pop     edi
        pop     esi
        ret     8
    }
}
