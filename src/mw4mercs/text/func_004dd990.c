/*
 * FUN_004dd990 (583 B) — __thiscall Adept::ControlsManager constructor.
 * Initializes the ControlsManager object: constructs a large array of
 * sub-objects (vtable 0x773910 / 0x7738f8), sets up the event-controls
 * list (vtable 0x7738e0), wires the state-engine list via FUN_004dd8b0,
 * and finally dispatches through the mapping-group vtable[3].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc6b0;
extern void __cdecl FUN_004d5b10(void);
extern void __cdecl FUN_004df9c0(void);
extern void __cdecl FUN_004dd770(void);
extern void __cdecl FUN_0041fc80(void);
extern void __cdecl FUN_004dd8b0(void);

__declspec(naked) void FUN_004dd990(void)
{
    __asm {
        sub     esp, 0x18
        mov     eax, dword ptr [g_007dc6b0]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_004d5b10
        lea     ecx, [esp+0x13]
        push    ecx
        lea     ecx, [esi+0x20]
        call    FUN_004df9c0
        lea     edi, [esi+0x44]
        mov     ecx, edi
        call    FUN_004dd770
        lea     ebp, [esi+0x60]
        mov     ecx, ebp
        mov     dword ptr [edi], 0x773910
        call    FUN_004dd770
        lea     ebx, [esi+0x7c]
        mov     ecx, ebx
        mov     dword ptr [ebp], 0x773910
        call    FUN_004dd770
        mov     dword ptr [ebx], 0x773910
        lea     ebx, [esi+0x98]
        mov     ecx, ebx
        call    FUN_004dd770
        mov     dword ptr [ebx], 0x773910
        lea     ebx, [esi+0xb4]
        mov     ecx, ebx
        call    FUN_004dd770
        mov     dword ptr [ebx], 0x7738f8
        lea     ebx, [esi+0xd0]
        mov     dword ptr [esp+0x20], 0x5
L_loop1:
        mov     ecx, ebx
        call    FUN_004dd770
        mov     eax, dword ptr [esp+0x20]
        mov     dword ptr [ebx], 0x7738f8
        add     ebx, 0x1c
        dec     eax
        mov     dword ptr [esp+0x20], eax
        jnz     L_loop1
        lea     ebx, [esi+0x15c]
        mov     dword ptr [esp+0x20], 0x212
L_loop2:
        mov     ecx, ebx
        call    FUN_004dd770
        mov     eax, dword ptr [esp+0x20]
        mov     dword ptr [ebx], 0x7738f8
        add     ebx, 0x1c
        dec     eax
        mov     dword ptr [esp+0x20], eax
        jnz     L_loop2
        lea     ebx, [esi+0x3b54]
        mov     ecx, ebx
        call    FUN_004dd770
        mov     dword ptr [ebx], 0x7738f8
        xor     ebx, ebx
        lea     ecx, [esi+0x3b78]
        push    ebx
        call    FUN_0041fc80
        mov     dword ptr [esi+0x3b78], 0x7738e0
        push    ebx
        lea     edx, [esp+0x1c]
        mov     dword ptr [esi+0x3b80], ebx
        mov     dword ptr [esi+0x18], ebx
        push    edx
        mov     ecx, edi
        mov     dword ptr [esi+0x3b84], ebx
        mov     dword ptr [esi], 0x7738d4
        mov     dword ptr [esi+0x10], ebx
        mov     dword ptr [esi+0x14], ebx
        mov     dword ptr [esi+0x1c], ebx
        mov     byte ptr [esi+0x3b75], bl
        mov     byte ptr [esi+0x2c], bl
        mov     byte ptr [esi+0x2d], bl
        mov     byte ptr [esi+0x3b76], bl
        mov     byte ptr [esi+0x3b77], bl
        mov     dword ptr [esi+0x3b70], ebx
        mov     byte ptr [esi+0x3b74], bl
        mov     dword ptr [esi+0x34], ebx
        mov     dword ptr [esi+0x38], ebx
        mov     dword ptr [esi+0x3c], ebx
        mov     dword ptr [esi+0x40], ebx
        mov     dword ptr [esp+0x20], ebx
        mov     dword ptr [edi+0x18], ebx
        call    FUN_004dd8b0
        mov     ecx, dword ptr [esi+0x3b70]
        mov     eax, dword ptr [esp+0x18]
        push    ecx
        lea     edx, [esp+0x1c]
        push    edx
        mov     ecx, ebp
        mov     dword ptr [ebp+0x18], eax
        call    FUN_004dd8b0
        mov     eax, dword ptr [esi+0x3b70]
        push    eax
        lea     edx, [esp+0x20]
        lea     ecx, [esi+0x7c]
        push    edx
        mov     dword ptr [esp+0x24], ebx
        mov     dword ptr [ecx+0x18], ebx
        call    FUN_004dd8b0
        mov     eax, dword ptr [esp+0x1c]
        mov     edx, dword ptr [esi+0x3b70]
        lea     ecx, [esi+0x98]
        mov     dword ptr [ecx+0x18], eax
        push    edx
        lea     eax, [esp+0x20]
        push    eax
        call    FUN_004dd8b0
        mov     edx, dword ptr [esi+0x3b70]
        push    edx
        lea     eax, [esp+0x18]
        lea     ecx, [esi+0xb4]
        push    eax
        mov     dword ptr [esp+0x1c], ebx
        mov     dword ptr [ecx+0x18], ebx
        call    FUN_004dd8b0
        lea     edi, [esi+0xd0]
        mov     ebp, 0x5
L_loop3:
        mov     ecx, dword ptr [esp+0x14]
        mov     edx, dword ptr [esi+0x3b70]
        push    edx
        lea     eax, [esp+0x18]
        mov     dword ptr [edi+0x18], ecx
        push    eax
        mov     ecx, edi
        call    FUN_004dd8b0
        add     edi, 0x1c
        dec     ebp
        jnz     L_loop3
        mov     dword ptr [esp+0x24], ebx
        lea     edi, [esi+0x15c]
        mov     ebx, 0x212
L_loop4:
        mov     ecx, dword ptr [esp+0x24]
        mov     edx, dword ptr [esi+0x3b70]
        push    edx
        lea     eax, [esp+0x28]
        mov     dword ptr [edi+0x18], ecx
        push    eax
        mov     ecx, edi
        call    FUN_004dd8b0
        add     edi, 0x1c
        dec     ebx
        jnz     L_loop4
        mov     eax, dword ptr [esi+0x3b70]
        mov     edx, dword ptr [esi+0x3b54]
        push    eax
        lea     ecx, [esi+0x3b54]
        lea     eax, [esp+0x18]
        push    eax
        call    dword ptr [edx+0xc]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x18
        ret
    }
}
