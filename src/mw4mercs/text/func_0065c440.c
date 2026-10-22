/*
 * FUN_0065c440 (147 B) — __fastcall (ECX = this), plain RET.
 *
 * Calls a virtual method (offset 0x2c); if it returns true, fetches a
 * string via FUN_005dd7a0, logs it via FUN_0069eb70, and decrements a
 * reference count, freeing when it hits zero. Then calls FUN_0065c320
 * and repeats the pattern with a different log code.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005dd7a0(void *);
extern void __cdecl FUN_0069eb70(int, void *);
extern void __cdecl FUN_004084e0(void *);
extern void __cdecl FUN_0065c320(void);

__declspec(naked) void __stdcall FUN_0065c440(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        call    dword ptr [eax + 0x2c]
        test    al, al
        jz      L_c480
        lea     ecx, [esp + 0x4]
        push    ecx
        mov     ecx, dword ptr [esi + 0x4]
        call    FUN_005dd7a0
        mov     ecx, dword ptr [esi + 0xc]
        push    eax
        push    4
        call    FUN_0069eb70
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      L_c480
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_c480
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_c480:
        mov     ecx, esi
        mov     dword ptr [esi + 0x3c], 0
        mov     byte ptr [esi + 0x40], 0
        call    FUN_0065c320
        test    al, al
        jnz     L_c4d0
        mov     ecx, dword ptr [esi + 0x4]
        lea     edx, [esp + 0x4]
        push    edx
        call    FUN_005dd7a0
        mov     ecx, dword ptr [esi + 0xc]
        push    eax
        push    6
        call    FUN_0069eb70
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      L_c4c9
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_c4c9
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_c4c9:
        mov     dword ptr [esi + 0x3c], 4
    L_c4d0:
        pop     esi
        pop     ecx
        ret
    }
}
