/*
 * FUN_004f92d0 (107 B) — MLR/Adept: object constructor. Sets vtable
 * 0x775a70, initializes fields, calls FUN_00415180 / FUN_00412740,
 * decrements a refcount. __thiscall (ECX = this), RET 0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8c10;
extern int g_00775a70;

extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_004f92d0(void)
{
    __asm {
        mov     eax, dword ptr [g_007b8c10]
        push    ebx
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        mov     dl, byte ptr [esp+0xc]
        mov     ax, word ptr [esp+0xe]
        xor     ebx, ebx
        mov     byte ptr [esi+0x10], bl
        mov     word ptr [esi+0x12], bx
        lea     ecx, [esi+0x1c]
        mov     dword ptr [ecx], ebx
        mov     dword ptr [esi], offset g_00775a70
        mov     byte ptr [esi+0x10], dl
        lea     edx, [esp+0x10]
        push    edx
        mov     dword ptr [esi+8], ebx
        mov     dword ptr [esi+0xc], ebx
        mov     word ptr [esi+0x12], ax
        mov     dword ptr [esi+0x14], ebx
        mov     dword ptr [esi+0x18], ebx
        call    FUN_00412740
        mov     eax, dword ptr [esp+0x10]
        cmp     eax, ebx
        jz      L9334
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L9334
        push    eax
        call    FUN_004084e0
        add     esp, 4
L9334:
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x8
    }
}
