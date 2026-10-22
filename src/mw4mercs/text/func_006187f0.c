/*
 * FUN_006187F0 (506 B) — __thiscall (ECX = this), RET 4 (one stack param).
 *
 * Iterates a collection via virtual methods [vtable+8]/[vtable+0x20],
 * allocating/initializing objects (FUN_004084d0/FUN_004d05d0), then walks
 * a linked list assigning slots through FUN_00617920.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int a);
extern void __fastcall FUN_004d05d0(void *this, void *a);
extern int __cdecl FUN_00412a00(void *a, void *b);
extern int __fastcall FUN_00416b60(void *this, void *a);
extern void __cdecl FUN_0040f060(void *a, void *b, void *c);
extern int __fastcall FUN_005df0d0(void *this);
extern void __fastcall FUN_00416a90(void *this, void *a, void *b);
extern void __fastcall FUN_0040d9b0(void *this);
extern void __fastcall FUN_00416bc0(void *this, void *a);
extern int __fastcall FUN_00416cc0(void *this);
extern int __fastcall FUN_00617920(void *this, int a);
extern void __fastcall FUN_00416c60(void *this);

extern int g_7b8c10;

__declspec(naked) char __fastcall FUN_006187f0(void *this, void *param_1)
{
    __asm {
        sub     esp, 0x20
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x34]
        mov     eax, dword ptr [edi]
        mov     ebp, ecx
        xor     ebx, ebx
        mov     ecx, edi
        mov     dword ptr [esp + 0x10], ebx
        call    dword ptr [eax + 8]
        test    eax, eax
        jbe     L90e
L812:
        mov     edx, dword ptr [edi]
        push    0x1
        lea     eax, [esp + 0x38]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        cmp     esi, ebx
        jz      L85a
        mov     ecx, dword ptr [g_7b8c10]
        mov     bl, byte ptr [esp + 0x34]
        push    ecx
        mov     ecx, esi
        call    FUN_004d05d0
        xor     eax, eax
        mov     byte ptr [esi + 0x14], bl
        mov     dword ptr [esi], 0x78c520
        mov     dword ptr [esi + 0x10], eax
        mov     dword ptr [esi + 0x18], eax
        mov     byte ptr [esi + 0x1c], al
        xor     ebx, ebx
        jmp     L85c
L85a:
        xor     esi, esi
L85c:
        lea     edx, [esp + 0x18]
        push    edx
        push    edi
        mov     dword ptr [esp + 0x20], ebx
        call    FUN_00412a00
        mov     eax, dword ptr [esp + 0x20]
        add     esp, 8
        cmp     eax, ebx
        jz      L89a
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [ebp + 0x54]
        call    FUN_00416b60
        cmp     eax, ebx
        jz      L89a
        mov     dword ptr [esi + 0x10], eax
        mov     al, byte ptr [esi + 0x14]
        test    al, al
        jnz     L896
        cmp     dword ptr [esi + 0x18], ebx
        jz      L89a
L896:
        mov     byte ptr [esi + 0x1c], 0x1
L89a:
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edi
        mov     dword ptr [esp + 0x1c], ebx
        call    FUN_00412a00
        mov     eax, dword ptr [esp + 0x1c]
        add     esp, 8
        cmp     eax, ebx
        jz      L8d6
        push    0x1
        push    ecx
        lea     edx, [esp + 0x1c]
        mov     ecx, esp
        push    edx
        call    FUN_0040f060
        mov     ecx, dword ptr [ebp + 0x38]
        call    FUN_005df0d0
        cmp     eax, ebx
        jz      L8d6
        mov     dword ptr [esi + 0x18], eax
        mov     byte ptr [esi + 0x1c], 0x1
L8d6:
        lea     eax, [esp + 0x10]
        push    eax
        push    esi
        lea     ecx, [ebp + 0x40]
        call    FUN_00416a90
        mov     edx, dword ptr [esp + 0x10]
        inc     edx
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x10], edx
        call    FUN_0040d9b0
        lea     ecx, [esp + 0x18]
        call    FUN_0040d9b0
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 8]
        test    eax, eax
        ja      L812
L90e:
        mov     eax, dword ptr [ebp + 0x38]
        mov     edi, dword ptr [eax + 0x10]
        add     eax, 0x10
        mov     dword ptr [esp + 0x10], 0x1
L91f:
        cmp     edi, ebx
        jz      L9e0
        mov     esi, dword ptr [edi]
        cmp     esi, ebx
        mov     edi, dword ptr [edi + 4]
        jz      L9e0
        cmp     dword ptr [esp + 0x10], 8
        jge     L9e0
        mov     al, byte ptr [esi + 0x24]
        test    al, al
        jz      L91f
        cmp     dword ptr [esi + 0x20], ebx
        jnz     L91f
        mov     eax, dword ptr [esi + 0x6c]
        cmp     eax, 1
        jz      L958
        cmp     eax, 2
        jnz     L91f
L958:
        lea     eax, [ebp + 0x40]
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_00416bc0
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x1c], 0x77a38c
        call    FUN_00416cc0
        cmp     eax, ebx
        jz      L992
L97a:
        mov     eax, dword ptr [eax + 0x18]
        cmp     eax, ebx
        jz      L985
        cmp     eax, esi
        jz      L9d2
L985:
        lea     ecx, [esp + 0x1c]
        call    FUN_00416cc0
        cmp     eax, ebx
        jnz     L97a
L992:
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        mov     ecx, ebp
        call    FUN_00617920
        mov     ecx, dword ptr [esp + 0x10]
        cmp     ecx, 8
        jge     L9c2
L9a7:
        cmp     dword ptr [eax + 0x18], ebx
        jz      L9c2
        push    ecx
        mov     ecx, ebp
        call    FUN_00617920
        mov     ecx, dword ptr [esp + 0x10]
        inc     ecx
        cmp     ecx, 8
        mov     dword ptr [esp + 0x10], ecx
        jl      L9a7
L9c2:
        cmp     dword ptr [eax + 0x18], ebx
        jnz     L9d2
        mov     dword ptr [eax + 0x18], esi
        mov     byte ptr [eax + 0x1c], 0x1
        inc     dword ptr [esp + 0x10]
L9d2:
        lea     ecx, [esp + 0x1c]
        call    FUN_00416c60
        jmp     L91f
L9e0:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x20
        ret     4
    }
}
