/*
 * FUN_00606AA0 (344 B) — __thiscall, RET 4 (1 stack param).
 *   Looks up an animation resource by name; on miss, allocates and
 *   constructs a new animation object. Uses EBP frame with locals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_76b2ac;
extern int g_7f27b8;
extern int g_7f27c0;
extern int g_7b8c10;
extern char g_78bacc;
extern char g_78ba8c;

extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004129c0(void);
extern void __cdecl FUN_00412950(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_006f4950(void);
extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_0066be20(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_004d2000(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_0066bef0(void);
extern void __cdecl FUN_004d21c0(void);

__declspec(naked) void *__fastcall FUN_00606AA0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x4c
        mov     eax, dword ptr [ebp + 0x8]
        push    ebx
        push    esi
        add     ecx, 0x10
        push    edi
        mov     edi, dword ptr [ecx]
        mov     dword ptr [ebp - 0x8], ecx
        push    eax
        lea     ecx, [ebp - 0x4]
        call    FUN_00412570
        lea     ecx, [ebp - 0x4]
        call    FUN_004129c0
        mov     ecx, eax
        call    FUN_00412950
        mov     ebx, dword ptr [g_76b2ac]
L_606ad2:
        test    edi, edi
        jz      L_606b1e
        mov     esi, dword ptr [edi]
        test    esi, esi
        mov     edi, dword ptr [edi + 0x4]
        jz      L_606b1e
        mov     edx, dword ptr [esi + 0x10]
        mov     ecx, dword ptr [ebp - 0x4]
        mov     eax, dword ptr [edx + 0x4]
        push    ecx
        add     eax, 0x2c
        push    eax
        call    ebx
        add     esp, 0x8
        test    eax, eax
        jnz     L_606ad2
        mov     eax, dword ptr [ebp - 0x4]
        test    eax, eax
        mov     esi, dword ptr [esi + 0x10]
        jz      L_606b13
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_606b13
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_606b13:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
L_606b1e:
        mov     ecx, dword ptr [g_7f27b8]
        push    ecx
        call    FUN_006f4950
        push    0x34
        call    FUN_004084d0
        xor     ebx, ebx
        add     esp, 0x4
        cmp     eax, ebx
        jz      L_606b45
        mov     ecx, eax
        call    FUN_0066be20
        mov     edi, eax
        jmp     L_606b47
L_606b45:
        xor     edi, edi
L_606b47:
        call    FUN_006f49a0
        mov     edx, dword ptr [g_7f27c0]
        push    edx
        call    FUN_006f4950
        push    0x14
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        cmp     esi, ebx
        jz      L_606b86
        mov     eax, dword ptr [g_7b8c10]
        push    eax
        mov     ecx, esi
        call    FUN_00415180
        mov     dword ptr [esi + 0x8], ebx
        mov     dword ptr [esi + 0xc], ebx
        mov     dword ptr [esi + 0x10], edi
        mov     dword ptr [esi], offset g_78bacc
        jmp     L_606b88
L_606b86:
        xor     esi, esi
L_606b88:
        mov     ecx, dword ptr [ebp - 0x8]
        push    esi
        call    FUN_004179b0
        call    FUN_006f49a0
        mov     esi, dword ptr [ebp + 0x8]
        push    ebx
        push    esi
        lea     ecx, [ebp - 0x4c]
        call    FUN_004d2000
        cmp     dword ptr [ebp - 0x10], ebx
        jz      L_606bad
        cmp     dword ptr [ebp - 0x30], ebx
        ja      L_606bc0
L_606bad:
        push    esi
        push    offset g_78ba8c
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L_606bc0
        int     3
L_606bc0:
        lea     ecx, [ebp - 0x4c]
        push    ecx
        mov     ecx, edi
        call    FUN_0066bef0
        lea     ecx, [ebp - 0x4c]
        call    FUN_004d21c0
        mov     eax, dword ptr [ebp - 0x4]
        cmp     eax, ebx
        jz      L_606bed
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_606bed
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_606bed:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
