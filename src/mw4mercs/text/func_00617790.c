/*
 * FUN_00617790 (346 B) — __thiscall, RET 4 (1 stack param).
 *   Constructs a set of animation objects (one per param_2 count),
 *   linking them into a list. Uses ESP-based locals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7b8c10;
extern char g_78c520;
extern char g_779f0c;

extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_004d05d0(void);
extern void __cdecl FUN_00416a90(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416d00(void);
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_00617920(void);

__declspec(naked) void __fastcall FUN_00617790(void)
{
    __asm {
        sub     esp, 0x1c
        push    ebx
        push    ebp
        push    esi
        mov     ebp, ecx
        mov     eax, dword ptr [ebp + 0x40]
        push    edi
        lea     edi, [ebp + 0x40]
        mov     ecx, edi
        call    dword ptr [eax + 0x8]
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        xor     ebx, ebx
        add     esp, 0x4
        cmp     esi, ebx
        jz      L_6177d9
        mov     ecx, dword ptr [g_7b8c10]
        push    ecx
        mov     ecx, esi
        call    FUN_004d05d0
        mov     dword ptr [esi], offset g_78c520
        mov     dword ptr [esi + 0x10], ebx
        mov     dword ptr [esi + 0x18], ebx
        mov     byte ptr [esi + 0x14], 0x1
        mov     byte ptr [esi + 0x1c], bl
        jmp     L_6177db
L_6177d9:
        xor     esi, esi
L_6177db:
        lea     edx, [esp + 0x14]
        push    edx
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], ebx
        call    FUN_00416a90
        lea     eax, [ebp + 0x54]
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00416bc0
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x18], offset g_779f0c
        call    FUN_00416d00
        cmp     eax, ebx
        jz      L_61781f
        mov     dword ptr [esi + 0x10], eax
        cmp     byte ptr [esi + 0x14], bl
        jnz     L_61781b
        cmp     dword ptr [esi + 0x18], ebx
        jz      L_61781f
L_61781b:
        mov     byte ptr [esi + 0x1c], 0x1
L_61781f:
        mov     ecx, dword ptr [esp + 0x30]
        mov     eax, 0x1
        cmp     ecx, eax
        mov     dword ptr [esp + 0x10], eax
        jle     L_617882
L_617830:
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        cmp     esi, ebx
        jz      L_617862
        mov     ecx, dword ptr [g_7b8c10]
        push    ecx
        mov     ecx, esi
        call    FUN_004d05d0
        mov     dword ptr [esi], offset g_78c520
        mov     dword ptr [esi + 0x10], ebx
        mov     dword ptr [esi + 0x18], ebx
        mov     byte ptr [esi + 0x14], bl
        mov     byte ptr [esi + 0x1c], bl
        jmp     L_617864
L_617862:
        xor     esi, esi
L_617864:
        lea     edx, [esp + 0x10]
        push    edx
        push    esi
        mov     ecx, edi
        call    FUN_00416a90
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x30]
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [esp + 0x10], eax
        jl      L_617830
L_617882:
        mov     eax, dword ptr [ebp + 0x38]
        mov     edi, dword ptr [eax + 0x10]
        add     eax, 0x10
        mov     ecx, 0x1
L_617890:
        mov     dword ptr [esp + 0x10], ecx
L_617894:
        cmp     edi, ebx
        jz      L_6178d4
        mov     esi, dword ptr [edi]
        cmp     esi, ebx
        mov     edi, dword ptr [edi + 0x4]
        jz      L_6178d4
        cmp     ecx, dword ptr [esp + 0x30]
        jge     L_6178d4
        mov     eax, dword ptr [esi + 0x6c]
        cmp     eax, 0x1
        jz      L_6178b4
        cmp     eax, 0x2
        jnz     L_617894
L_6178b4:
        cmp     byte ptr [esi + 0x24], bl
        jz      L_617894
        cmp     dword ptr [esi + 0x20], ebx
        jnz     L_617894
        push    ecx
        mov     ecx, ebp
        call    FUN_00617920
        mov     dword ptr [eax + 0x18], esi
        mov     byte ptr [eax + 0x1c], 0x1
        mov     ecx, dword ptr [esp + 0x10]
        inc     ecx
        jmp     L_617890
L_6178d4:
        lea     ecx, [esp + 0x18]
        mov     dword ptr [ebp + 0x3c], ebx
        call    FUN_00416c60
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c
        ret     0x4
    }
}
