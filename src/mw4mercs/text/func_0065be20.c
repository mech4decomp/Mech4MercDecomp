/*
 * FUN_0065be20 (86 B) — __fastcall (ECX = this) helper.
 *
 * Calls virtual method [this+0]()+0x2C; if true, calls FUN_005dd7a0
 * (thiscall) and FUN_0069eb70(4, ...), decrements a refcount byte and
 * frees when it hits 0. Then calls FUN_005c1720(1) (thiscall) and sets
 * a byte at [this+4]+0x614.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_005dd7a0(void *this, void *arg);
extern void __cdecl FUN_0069eb70(int a, void *b);
extern void __cdecl FUN_004084e0(void *ptr);
extern void __fastcall FUN_005c1720(void *this, int a);

__declspec(naked) void __fastcall FUN_0065be20(void *this)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        call    dword ptr [eax + 0x2c]
        test    al, al
        jz      L_60
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
        jz      L_60
        mov     cl, byte ptr [eax + -0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_60
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_60:
        mov     esi, dword ptr [esi + 0x4]
        push    0x1
        mov     ecx, esi
        call    FUN_005c1720
        mov     byte ptr [esi + 0x614], 0x1
        pop     esi
        pop     ecx
        ret
    }
}
