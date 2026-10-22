/*
 * FUN_004f4c50 (284 B) — MLR/Adept object constructor. __thiscall
 * (ECX=this), RET 0x10 (4 args). Calls FUN_004fa6d0, initializes
 * sub-objects/vtables, then dispatches on a member value (switch 1/2/3)
 * to FUN_0041acb0 / FUN_00419f30 / FUN_0041a070.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da88c;
extern int g_007da888;

extern void FUN_004fa6d0(void);
extern void FUN_0041fc80(void);
extern void FUN_00419f30(void);
extern void FUN_0041acb0(void);
extern void FUN_0041a070(void);

__declspec(naked) void FUN_004f4c50(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x10]
        mov     edx, dword ptr [esp+0x8]
        sub     esp, 0xc
        push    ebx
        push    ebp
        push    esi
        push    eax
        mov     eax, dword ptr [esp+0x20]
        mov     ebp, ecx
        mov     ecx, dword ptr [esp+0x28]
        push    ecx
        push    edx
        push    eax
        mov     ecx, ebp
        call    FUN_004fa6d0
        lea     esi, [ebp+0x210]
        push    0x0
        mov     ecx, esi
        call    FUN_0041fc80
        mov     dword ptr [esi], 0x773328
        lea     esi, [ebp+0x218]
        push    0x0
        mov     ecx, esi
        call    FUN_0041fc80
        mov     edx, dword ptr [ebp+0x78]
        lea     ecx, [ebp+0x78]
        mov     dword ptr [esi], 0x775540
        mov     dword ptr [ebp], 0x7754a0
        call    dword ptr [edx+0x4]
        mov     ecx, dword ptr [ebp+0xe0]
        mov     ebx, eax
        mov     al, byte ptr [ebx+0x50]
        test    al, al
        mov     dword ptr [ebp+0x254], 0x0
        mov     byte ptr [ebp+0x250], 0x0
        jz      L4cd8
        mov     eax, dword ptr [ecx]
        push    0x0
        push    0x6
        call    dword ptr [eax+0x4]
        jmp     L4ce1
L4cd8:
        mov     edx, dword ptr [ecx]
        push    0x0
        push    0x4
        call    dword ptr [edx+0x4]
L4ce1:
        mov     eax, dword ptr [ebx+0x74]
        dec     eax
        push    edi
        lea     edx, [ebp+0x220]
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        mov     edi, edx
        rep     movsd
        pop     edi
        jz      L4d27
        dec     eax
        jz      L4d10
        dec     eax
        jnz     L4d46
        lea     eax, [ebx+0x60]
        push    eax
        mov     ecx, edx
        call    FUN_00419f30
        jmp     L4d46
L4d10:
        mov     ecx, dword ptr [g_007da88c]
        push    ecx
        lea     ecx, [esp+0x10]
        call    FUN_0041acb0
        lea     edx, [esp+0xc]
        push    edx
        jmp     L4d3b
L4d27:
        mov     eax, dword ptr [g_007da888]
        push    eax
        lea     ecx, [esp+0x10]
        call    FUN_0041acb0
        lea     ecx, [esp+0xc]
        push    ecx
L4d3b:
        lea     ecx, [ebp+0x220]
        call    FUN_0041a070
L4d46:
        mov     edx, dword ptr [ebx+0x54]
        mov     eax, dword ptr [ebx+0x58]
        mov     ecx, dword ptr [ebx+0x5c]
        mov     dword ptr [ebp+0x22c], edx
        mov     dword ptr [ebp+0x23c], eax
        pop     esi
        mov     dword ptr [ebp+0x24c], ecx
        mov     eax, ebp
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x10
    }
}
