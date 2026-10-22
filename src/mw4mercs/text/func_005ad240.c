/*
 * FUN_005AD240 (77 B) — __thiscall (ECX = this), RET 4 (one byte param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041FD80(void);
extern void __cdecl FUN_0041FCB0(void);
extern void __cdecl FUN_005AD120(void);
extern void __cdecl FUN_005AD080(void);

__declspec(naked) void __stdcall FUN_005AD240(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [esi + 0x18]
        mov     ecx, edi
        call    FUN_0041FD80
        test    eax, eax
        jz      L259
        mov     byte ptr [eax + 0x340], 0x0
L259:
        mov     ecx, edi
        call    FUN_0041FCB0
        push    0x1
        mov     ecx, esi
        call    FUN_005AD120
        mov     al, byte ptr [esp + 0xc]
        test    al, al
        jz      L27F
        push    0x1
        mov     ecx, esi
        call    FUN_005AD080
        pop     edi
        pop     esi
        ret     4
L27F:
        push    0x0
        mov     ecx, esi
        call    FUN_005AD080
        pop     edi
        pop     esi
        ret     4
    }
}
