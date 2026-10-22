/*
 * FUN_0065BAD0 (104 B) — __fastcall, RET 0.
 *
 * Calls virtual method this->vtable+0x2C. If true, calls
 * FUN_005dd7a0(&local) then FUN_0069eb70(4, result), decrements a
 * refcount at local-1 and frees via FUN_004084e0 when it hits zero.
 * Then calls FUN_0065ab00, sets flags, and calls FUN_0065a840.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005dd7a0(void);
extern void __cdecl FUN_0069eb70(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0065ab00(void);
extern void __cdecl FUN_0065a840(void);

__declspec(naked) void __fastcall FUN_0065bad0(void *this)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        push    edi
        call    dword ptr [eax + 0x2c]
        test    al, al
        jz      l_bb11
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi + 0x4]
        call    FUN_005dd7a0
        mov     ecx, dword ptr [esi + 0xc]
        push    eax
        push    0x4
        call    FUN_0069eb70
        mov     eax, dword ptr [esp + 0x8]
        test    eax, eax
        jz      l_bb11
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_bb11
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_bb11:
        mov     edi, dword ptr [esi + 0x4]
        push    0x0
        push    edi
        call    FUN_0065ab00
        mov     edx, dword ptr [esi + 0x8]
        push    edx
        push    edi
        mov     byte ptr [edi + 0x614], 0x1
        mov     byte ptr [esi + 0x14], 0x0
        call    FUN_0065a840
        add     esp, 0x10
        pop     edi
        pop     esi
        pop     ecx
        ret
    }
}
