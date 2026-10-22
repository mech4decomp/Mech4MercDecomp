/*
 * FUN_0065bb80 (86 B) — __fastcall (ECX = this) helper.
 *
 * Calls virtual method [this+0]()+0x2C; if true, calls FUN_005dd7a0
 * (thiscall) and FUN_0069eb70(4, ...), decrements a refcount byte and
 * frees when it hits 0. Then toggles a bool at [this+4]+0x544.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_005dd7a0(void *this, void *arg);
extern void __cdecl FUN_0069eb70(int a, void *b);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __fastcall FUN_0065bb80(void *this)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        call    dword ptr [eax + 0x2c]
        test    al, al
        jz      L_c0
        lea     ecx, [esp + 0x4]
        push    ecx
        mov     ecx, dword ptr [esi + 0x4]
        call    FUN_005dd7a0
        mov     ecx, dword ptr [esi + 0xc]
        push    eax
        push    0x4
        call    FUN_0069eb70
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      L_c0
        mov     cl, byte ptr [eax + -0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_c0
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_c0:
        mov     esi, dword ptr [esi + 0x4]
        cmp     byte ptr [esi + 0x544], 0x1
        setnz   dl
        mov     byte ptr [esi + 0x544], dl
        pop     esi
        pop     ecx
        ret
    }
}
