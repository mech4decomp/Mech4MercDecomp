/*
 * FUN_00441ec0 (357 B) — MLR global mesh-buffer pool init (__cdecl, RET).
 * Allocates the mesh object, a 0x200-entry index buffer, and a 0x100-entry
 * index buffer, storing pointers into globals 0x7b986c/0x7b9868/0x7b9864.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void  FUN_006f4710(void);
extern void *FUN_004084d0(void);
extern void  FUN_004151c0(void);
extern void  FUN_004084e0(void);

extern int g_007b958c;
extern int g_007b9870;
extern int g_007d98f8;
extern int g_007b986c;
extern int g_007b9868;
extern int g_007b9864;

__declspec(naked) void FUN_00441ec0(void)
{
    __asm {
        mov     eax, dword ptr [g_007b958c]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        xor     ebx, ebx
        push    ebx
        push    0x76e6e0
        call    FUN_006f4710
        push    0x18
        mov     dword ptr [g_007b9870], eax
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        cmp     esi, ebx
        jz      L_f10
        mov     ecx, dword ptr [g_007d98f8]
        push    ecx
        push    0x76e6bc
        push    0x6b
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi + 0x14], 0x4421c0
        mov     dword ptr [g_007b986c], esi
        jmp     L_f16
L_f10:
        mov     dword ptr [g_007b986c], ebx
L_f16:
        push    0x8
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      L_f2b
        mov     dword ptr [eax], ebx
        mov     dword ptr [eax + 0x4], ebx
        jmp     L_f2d
L_f2b:
        xor     eax, eax
L_f2d:
        mov     ebp, eax
        mov     edi, dword ptr [ebp + 0x4]
        cmp     edi, 0x200
        mov     dword ptr [g_007b9868], eax
        jz      L_f9c
        push    0x1000
        call    FUN_004084d0
        mov     ebx, dword ptr [ebp]
        add     esp, 0x4
        test    ebx, ebx
        mov     esi, eax
        jz      L_f90
        cmp     edi, 0x200
        mov     edx, 0x200
        ja      L_f64
        mov     edx, edi
L_f64:
        mov     eax, edx
        dec     edx
        test    eax, eax
        jz      L_f87
        mov     ecx, ebx
        lea     eax, [esi + edx*8]
        sub     ecx, esi
        inc     edx
L_f73:
        mov     edi, dword ptr [ecx + eax]
        mov     dword ptr [eax], edi
        mov     edi, dword ptr [ecx + eax + 0x4]
        mov     dword ptr [eax + 0x4], edi
        dec     edx
        sub     eax, 0x8
        test    edx, edx
        ja      L_f73
L_f87:
        push    ebx
        call    FUN_004084e0
        add     esp, 0x4
L_f90:
        mov     dword ptr [ebp], esi
        mov     dword ptr [ebp + 0x4], 0x200
        xor     ebx, ebx
L_f9c:
        push    0x8
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      L_fb1
        mov     dword ptr [eax], ebx
        mov     dword ptr [eax + 0x4], ebx
        jmp     L_fb3
L_fb1:
        xor     eax, eax
L_fb3:
        mov     ebp, eax
        mov     edi, dword ptr [ebp + 0x4]
        cmp     edi, 0x100
        mov     dword ptr [g_007b9864], eax
        jz      L_2020
        push    0x800
        call    FUN_004084d0
        mov     ebx, dword ptr [ebp]
        add     esp, 0x4
        test    ebx, ebx
        mov     esi, eax
        jz      L_2016
        cmp     edi, 0x100
        mov     edx, 0x100
        ja      L_fea
        mov     edx, edi
L_fea:
        mov     ecx, edx
        dec     edx
        test    ecx, ecx
        jz      L_200d
        mov     ecx, ebx
        lea     eax, [esi + edx*8]
        sub     ecx, esi
        inc     edx
L_ff9:
        mov     edi, dword ptr [ecx + eax]
        mov     dword ptr [eax], edi
        mov     edi, dword ptr [ecx + eax + 0x4]
        mov     dword ptr [eax + 0x4], edi
        dec     edx
        sub     eax, 0x8
        test    edx, edx
        ja      L_ff9
L_200d:
        push    ebx
        call    FUN_004084e0
        add     esp, 0x4
L_2016:
        mov     dword ptr [ebp], esi
        mov     dword ptr [ebp + 0x4], 0x100
L_2020:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}
