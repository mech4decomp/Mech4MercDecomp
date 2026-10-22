/*
 * FUN_0040ad60 (1206 B) — __fastcall engine/config init. Shuffles a 0x32-entry
 * index table, constructs/destroys a pair of sub-objects (esi=this+0x10,
 * edi=this+0x24) through a long sequence of FUN_00416xxx helper calls, and
 * returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00415040(int a);
extern void *__cdecl FUN_004084d0(int a);
extern void *__cdecl FUN_0040aa10(int a);
extern void __cdecl FUN_00416a90(void *a, void *b);
extern void __cdecl FUN_00416b60(void *a);
extern void __cdecl FUN_00416bc0(void *a);
extern void __cdecl FUN_00416c80(void);
extern void __cdecl FUN_00416d00(void);
extern void __cdecl FUN_00416c90(void);
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_00416ca0(void);
extern void __cdecl FUN_00416cb0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_00416ce0(void);
extern void __cdecl FUN_00416d10(void *a);
extern void __cdecl FUN_00416d40(void);
extern void __cdecl FUN_00415cc0(void);

__declspec(naked) void FUN_0040ad60(void)
{
    __asm {
        sub     esp, 0xf4
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        xor     ebp, ebp
        xor     eax, eax
        lea     ecx, [esp+0x3c]
L_loop1:
        mov     dword ptr [ecx], eax
        inc     eax
        add     ecx, 0x4
        cmp     eax, 0x32
        jl      L_loop1
        xor     ecx, ecx
        mov     dword ptr [esp+0x10], ecx
L_loop2:
        mov     eax, 0x32
        sub     eax, ecx
        push    eax
        call    FUN_00415040
        mov     ecx, dword ptr [esp+0x14]
        mov     esi, dword ptr [esp+ecx*4+0x40]
        add     eax, ecx
        mov     edx, dword ptr [esp+eax*4+0x40]
        lea     eax, [esp+eax*4+0x40]
        add     esp, 0x4
        mov     dword ptr [eax], esi
        mov     dword ptr [esp+ecx*4+0x3c], edx
        inc     ecx
        cmp     ecx, 0x32
        mov     dword ptr [esp+0x10], ecx
        jl      L_loop2
        lea     esi, [edi+0x10]
        mov     dword ptr [esp+0x10], ebp
        add     edi, 0x24
L_loop3:
        push    0x14
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebp
        jz      L_skip1
        mov     ecx, dword ptr [esp+0x10]
        mov     edx, dword ptr [esp+ecx*4+0x3c]
        push    edx
        mov     ecx, eax
        call    FUN_0040aa10
        mov     ebx, eax
        jmp     L_after1
L_skip1:
        xor     ebx, ebx
L_after1:
        mov     eax, dword ptr [esp+0x10]
        lea     ecx, [esp+eax*4+0x3c]
        push    ecx
        push    ebx
        mov     ecx, esi
        call    FUN_00416a90
        mov     edx, dword ptr [esp+0x10]
        lea     eax, [esp+edx*4+0x3c]
        push    eax
        push    ebx
        mov     ecx, edi
        call    FUN_00416a90
        mov     eax, dword ptr [esp+0x10]
        inc     eax
        cmp     eax, 0x32
        mov     dword ptr [esp+0x10], eax
        jl      L_loop3
        mov     dword ptr [esp+0x10], ebp
L_loop4:
        lea     ecx, [esp+0x10]
        push    ecx
        mov     ecx, esi
        call    FUN_00416b60
        lea     edx, [esp+0x10]
        push    edx
        mov     ecx, edi
        call    FUN_00416b60
        mov     eax, dword ptr [esp+0x10]
        inc     eax
        cmp     eax, 0x32
        mov     dword ptr [esp+0x10], eax
        jl      L_loop4
        push    esi
        lea     ecx, [esp+0x2c]
        call    FUN_00416bc0
        mov     ebp, 0x76cf98
        push    edi
        lea     ecx, [esp+0x18]
        mov     dword ptr [esp+0x2c], ebp
        call    FUN_00416bc0
        lea     ecx, [esp+0x28]
        mov     dword ptr [esp+0x14], ebp
        call    FUN_00416c80
        lea     ecx, [esp+0x14]
        call    FUN_00416c80
        lea     ecx, [esp+0x28]
        call    FUN_00416d00
        lea     ecx, [esp+0x14]
        call    FUN_00416d00
        lea     ecx, [esp+0x28]
        call    FUN_00416c90
        lea     ecx, [esp+0x14]
        call    FUN_00416c90
        lea     ecx, [esp+0x28]
        call    FUN_00416d00
        lea     ecx, [esp+0x14]
        call    FUN_00416d00
        lea     ecx, [esp+0x14]
        call    FUN_00416c60
        lea     ecx, [esp+0x28]
        call    FUN_00416c60
        push    esi
        lea     ecx, [esp+0x2c]
        call    FUN_00416bc0
        push    edi
        lea     ecx, [esp+0x18]
        mov     dword ptr [esp+0x2c], ebp
        call    FUN_00416bc0
        xor     ebx, ebx
        lea     ecx, [esp+0x28]
        mov     dword ptr [esp+0x14], ebp
        mov     dword ptr [esp+0x10], ebx
        call    FUN_00416d00
        test    eax, eax
        jz      L_after2
L_loop5:
        lea     ecx, [esp+0x14]
        call    FUN_00416d00
        lea     ecx, [esp+0x28]
        call    FUN_00416ca0
        lea     ecx, [esp+0x14]
        call    FUN_00416ca0
        mov     edx, dword ptr [esp+0x10]
        inc     edx
        lea     ecx, [esp+0x28]
        mov     dword ptr [esp+0x10], edx
        call    FUN_00416d00
        test    eax, eax
        jnz     L_loop5
L_after2:
        lea     ecx, [esp+0x28]
        call    FUN_00416c90
        lea     ecx, [esp+0x14]
        call    FUN_00416c90
        lea     ecx, [esp+0x28]
        mov     dword ptr [esp+0x10], 0x31
        call    FUN_00416d00
        test    eax, eax
        jz      L_after3
L_loop6:
        lea     ecx, [esp+0x14]
        call    FUN_00416d00
        lea     ecx, [esp+0x28]
        call    FUN_00416cb0
        lea     ecx, [esp+0x14]
        call    FUN_00416cb0
        mov     edx, dword ptr [esp+0x10]
        dec     edx
        lea     ecx, [esp+0x28]
        mov     dword ptr [esp+0x10], edx
        call    FUN_00416d00
        test    eax, eax
        jnz     L_loop6
L_after3:
        lea     ecx, [esp+0x14]
        call    FUN_00416c60
        lea     ecx, [esp+0x28]
        call    FUN_00416c60
        push    esi
        lea     ecx, [esp+0x18]
        call    FUN_00416bc0
        push    edi
        lea     ecx, [esp+0x2c]
        mov     dword ptr [esp+0x18], ebp
        call    FUN_00416bc0
        lea     ecx, [esp+0x14]
        mov     dword ptr [esp+0x28], ebp
        mov     dword ptr [esp+0x10], ebx
        call    FUN_00416cc0
        test    eax, eax
        jz      L_after4
L_loop7:
        lea     ecx, [esp+0x28]
        call    FUN_00416cc0
        mov     edx, dword ptr [esp+0x10]
        inc     edx
        lea     ecx, [esp+0x14]
        mov     dword ptr [esp+0x10], edx
        call    FUN_00416cc0
        test    eax, eax
        jnz     L_loop7
L_after4:
        lea     ecx, [esp+0x14]
        call    FUN_00416c90
        lea     ecx, [esp+0x28]
        call    FUN_00416c90
        lea     ecx, [esp+0x14]
        mov     dword ptr [esp+0x10], 0x31
        call    FUN_00416ce0
        test    eax, eax
        jz      L_after5
L_loop8:
        lea     ecx, [esp+0x28]
        call    FUN_00416ce0
        mov     edx, dword ptr [esp+0x10]
        dec     edx
        lea     ecx, [esp+0x14]
        mov     dword ptr [esp+0x10], edx
        call    FUN_00416ce0
        test    eax, eax
        jnz     L_loop8
L_after5:
        lea     ecx, [esp+0x28]
        call    FUN_00416c60
        lea     ecx, [esp+0x14]
        call    FUN_00416c60
        push    esi
        lea     ecx, [esp+0x2c]
        call    FUN_00416bc0
        push    edi
        lea     ecx, [esp+0x18]
        mov     dword ptr [esp+0x2c], ebp
        call    FUN_00416bc0
        xor     eax, eax
        mov     dword ptr [esp+0x14], ebp
        mov     dword ptr [esp+0x10], eax
L_loop9:
        push    eax
        lea     ecx, [esp+0x2c]
        call    FUN_00416d10
        mov     eax, dword ptr [esp+0x10]
        push    eax
        lea     ecx, [esp+0x18]
        call    FUN_00416d10
        mov     eax, dword ptr [esp+0x10]
        inc     eax
        cmp     eax, 0x32
        mov     dword ptr [esp+0x10], eax
        jl      L_loop9
        lea     ecx, [esp+0x14]
        call    FUN_00416c60
        lea     ecx, [esp+0x28]
        call    FUN_00416c60
        push    esi
        lea     ecx, [esp+0x18]
        call    FUN_00416bc0
        push    edi
        lea     ecx, [esp+0x2c]
        mov     dword ptr [esp+0x18], ebp
        call    FUN_00416bc0
        lea     ecx, [esp+0x14]
        mov     dword ptr [esp+0x28], ebp
        mov     dword ptr [esp+0x10], ebx
        call    FUN_00416d00
        test    eax, eax
        jz      L_after6
L_loop10:
        lea     ecx, [esp+0x14]
        call    FUN_00416d40
        push    ebx
        lea     ecx, [esp+0x2c]
        call    FUN_00416d10
        cmp     eax, ebx
        jz      L_skip2
        mov     edx, dword ptr [eax]
        push    0x1
        mov     ecx, eax
        call    dword ptr [edx]
L_skip2:
        mov     edx, dword ptr [esp+0x10]
        inc     edx
        lea     ecx, [esp+0x14]
        mov     dword ptr [esp+0x10], edx
        call    FUN_00416d00
        test    eax, eax
        jnz     L_loop10
L_after6:
        lea     ecx, [esp+0x28]
        call    FUN_00416c60
        lea     ecx, [esp+0x14]
        call    FUN_00416c60
        push    esi
        lea     ecx, [esp+0x2c]
        call    FUN_00416bc0
        push    edi
        lea     ecx, [esp+0x18]
        mov     dword ptr [esp+0x2c], ebp
        call    FUN_00416bc0
        mov     dword ptr [esp+0x14], ebp
        mov     dword ptr [esp+0x10], ebx
        jmp     L_after7
L_skip3:
        xor     ebx, ebx
L_after7:
        push    0x14
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      L_skip4
        mov     ecx, dword ptr [esp+0x10]
        mov     edx, dword ptr [esp+ecx*4+0x3c]
        push    edx
        mov     ecx, eax
        call    FUN_0040aa10
        mov     ebx, eax
L_skip4:
        mov     eax, dword ptr [esp+0x10]
        lea     ecx, [esp+eax*4+0x3c]
        push    ecx
        push    ebx
        mov     ecx, esi
        call    FUN_00416a90
        mov     edx, dword ptr [esp+0x10]
        lea     eax, [esp+edx*4+0x3c]
        push    eax
        push    ebx
        mov     ecx, edi
        call    FUN_00416a90
        mov     eax, dword ptr [esp+0x10]
        inc     eax
        cmp     eax, 0x32
        mov     dword ptr [esp+0x10], eax
        jl      L_skip3
        lea     ecx, [esp+0x14]
        call    FUN_00416c60
        lea     ecx, [esp+0x28]
        call    FUN_00416c60
        push    esi
        lea     ecx, [esp+0x18]
        call    FUN_00416bc0
        push    edi
        lea     ecx, [esp+0x2c]
        mov     dword ptr [esp+0x18], ebp
        call    FUN_00416bc0
        lea     ecx, [esp+0x14]
        mov     dword ptr [esp+0x28], ebp
        mov     dword ptr [esp+0x10], 0x0
        call    FUN_00415cc0
        test    eax, eax
        jz      L_after8
L_loop11:
        push    eax
        call    FUN_00415040
        add     esp, 0x4
        mov     esi, eax
        push    esi
        lea     ecx, [esp+0x18]
        call    FUN_00416d10
        lea     ecx, [esp+0x14]
        call    FUN_00416d40
        push    esi
        lea     ecx, [esp+0x2c]
        call    FUN_00416d10
        test    eax, eax
        jz      L_skip5
        mov     edx, dword ptr [eax]
        push    0x1
        mov     ecx, eax
        call    dword ptr [edx]
L_skip5:
        mov     edx, dword ptr [esp+0x10]
        inc     edx
        lea     ecx, [esp+0x14]
        mov     dword ptr [esp+0x10], edx
        call    FUN_00415cc0
        test    eax, eax
        jnz     L_loop11
L_after8:
        lea     ecx, [esp+0x28]
        call    FUN_00416c60
        lea     ecx, [esp+0x14]
        call    FUN_00416c60
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0xf4
        ret
    }
}
