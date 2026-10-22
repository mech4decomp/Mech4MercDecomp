/*
 * FUN_005DC320 (72 B) — If this+0x170 is non-null and this+0x2F0 is
 * non-zero, calls FUN_00415230([0x007F25C0], [obj+4]); if it returns
 * non-zero, calls virtual method at vtable+4 on [obj+0xE0] with
 * (0xD, 0). Otherwise calls virtual method at vtable+0xC8 on obj.
 *
 * __fastcall (ECX = this), no stack params.
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_005dc320(void)
{
    

extern int DAT_007f25c0;
extern void __cdecl FUN_100415213(void);
__asm {
push    esi
        mov     esi, dword ptr [ecx + 0x170]
        test    esi, esi
        jz      L35c
        mov     al, byte ptr [ecx + 0x2F0]
        test    al, al
        jz      L35c
        test    esi, esi
        jz      L35c
        mov eax, dword ptr [DAT_007f25c0]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call FUN_100415213
        test    al, al
        jz      L35c
        mov     ecx, dword ptr [esi + 0xE0]
        mov     edx, dword ptr [ecx]
        push    0
        push    0xd
        call    dword ptr [edx + 0x4]
        pop     esi
        ret
    L35c:
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0xC8]
        pop     esi
        ret
    }


}
