/*
 * FUN_00659b70 (710 B) — AI formation loader. Allocates several objects,
 * reads a formation list, builds formation entries, lowercases names,
 * and registers them. Complex stack frame (0x128) with many callees.
 *
 * __cdecl, no params, plain RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f244c;
extern int g_0080da64;
extern int g_007b8810;
extern int g_0080da24;
extern int g_0080d9bc;
extern char g_794a84[];      /* "ai\\ai.formations" */
extern char g_794a74[];      /* "formation_%s" */
extern int g_76cd64;         /* vtable */
extern int g_76cc9c;         /* vtable */
extern void *g_0076b420;     /* sprintf IAT */
extern void *g_0076b29c;     /* tolower IAT */

extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_005cb210(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0065a3c0(void);
extern void __cdecl FUN_004d2000(void);
extern void __cdecl FUN_004d2310(void);
extern void __cdecl FUN_0040dd50(void);
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004c41d0(void);
extern void __cdecl FUN_005cbb40(void);
extern void __cdecl FUN_0041f3d0(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_005cb540(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0064ff50(void);
extern void __cdecl FUN_00650120(void);
extern void __cdecl FUN_0064fe70(void);
extern void __cdecl FUN_0065a5d0(void);
extern void __cdecl FUN_0065a3e0(void);
extern void __cdecl FUN_0040de20(void);
extern void __cdecl FUN_005b8a00(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void __cdecl FUN_00659b70(void)
{
    __asm {
        sub     esp, 0x128
        mov     eax, dword ptr [g_007f244c]
        push    ebx
        push    esi
        xor     ebx, ebx
        push    eax
        mov     dword ptr [esp + 0x130], ebx
        call    FUN_006f4950
        lea     ecx, [esp + 0xb]
        push    ecx
        lea     ecx, [esp + 0x10]
        call    FUN_005cb210
        push    0xc
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        cmp     esi, ebx
        jz      L_bbbe
        lea     edx, [esp + 0xb]
        push    edx
        mov     ecx, esi
        call    FUN_0065a3c0
        mov     dword ptr [g_0080da64], esi
        jmp     L_bc4
    L_bbbe:
        mov     dword ptr [g_0080da64], ebx
    L_bc4:
        push    0x44
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      L_be5
        push    ebx
        push    offset g_794a84
        mov     ecx, eax
        call    FUN_004d2000
        mov     dword ptr [esp + 0x18], eax
        jmp     L_be9
    L_be5:
        mov     dword ptr [esp + 0x18], ebx
    L_be9:
        mov     esi, dword ptr [esp + 0x18]
        mov     ecx, esi
        call    FUN_004d2310
        push    0x50
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      L_c10
        push    esi
        mov     ecx, eax
        call    FUN_0040dd50
        mov     dword ptr [esp + 0x1c], eax
        jmp     L_c14
    L_c10:
        mov     dword ptr [esp + 0x1c], ebx
    L_c14:
        mov     eax, dword ptr [g_007b8810]
        push    ebp
        push    edi
        push    eax
        push    0xc
        call    FUN_004084c0
        mov     esi, eax
        add     esp, 0x8
        cmp     esi, ebx
        jz      L_c45
        mov     ecx, dword ptr [esp + 0x24]
        add     ecx, 0x44
        push    ecx
        mov     ecx, esi
        call    FUN_004c41d0
        mov     dword ptr [esi], offset g_76cd64
        mov     ebp, esi
        jmp     L_c47
    L_c45:
        xor     ebp, ebp
    L_c47:
        mov     eax, dword ptr [ebp + 0x8]
        cmp     eax, ebx
        jz      L_dd2
        mov     edi, dword ptr [eax]
        cmp     edi, ebx
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [ebp + 0x8], edx
        jz      L_dd2
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        mov     eax, dword ptr [esp + 0x1c]
        push    eax
        push    eax
        call    FUN_005cbb40
        push    0xc
        mov     dword ptr [esp + 0x28], eax
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x10
        cmp     esi, ebx
        jz      L_c99
        lea     ecx, [edi + 0x18]
        push    ecx
        mov     ecx, esi
        call    FUN_004c41d0
        mov     dword ptr [esi], offset g_76cc9c
        jmp     L_c9b
    L_c99:
        xor     esi, esi
    L_c9b:
        mov     eax, dword ptr [esi + 0x8]
        cmp     eax, ebx
        jz      L_cf0
        mov     ecx, dword ptr [eax]
        cmp     ecx, ebx
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [esi + 0x8], edx
        jz      L_cf0
        lea     eax, [esp + 0x28]
        push    eax
        call    FUN_0041f3d0
        mov     ecx, dword ptr [esp + 0x18]
        cmp     ecx, dword ptr [esp + 0x1c]
        jz      L_cdd
        cmp     ecx, ebx
        jz      L_cd4
        lea     edx, [esp + 0x28]
        push    edx
        call    FUN_0040c5d0
        mov     ecx, dword ptr [esp + 0x18]
    L_cd4:
        add     ecx, 0xc
        mov     dword ptr [esp + 0x18], ecx
        jmp     L_c9b
    L_cdd:
        push    0x1
        lea     eax, [esp + 0x2c]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x20]
        call    FUN_005cb540
        jmp     L_c9b
    L_cf0:
        push    esi
        call    FUN_004084e0
        mov     ecx, dword ptr [edi + 0x14]
        push    ecx
        lea     edx, [esp + 0x3c]
        push    offset g_794a74
        push    edx
        call    dword ptr [g_0076b420]
        mov     al, byte ptr [esp + 0x44]
        add     esp, 0x10
        cmp     al, bl
        lea     esi, [esp + 0x34]
        jz      L_d30
    L_d19:
        movsx   eax, al
        push    eax
        call    dword ptr [g_0076b29c]
        add     esp, 0x4
        mov     byte ptr [esi], al
        mov     al, byte ptr [esi + 0x1]
        inc     esi
        cmp     al, bl
        jnz     L_d19
    L_d30:
        mov     ecx, dword ptr [g_0080da24]
        push    ecx
        lea     edx, [esp + 0x38]
        push    edx
        call    FUN_0064ff50
        mov     esi, eax
        add     esp, 0x8
        cmp     esi, ebx
        jnz     L_d5e
        lea     eax, [esp + 0x34]
        push    offset g_0080da24
        push    eax
        call    FUN_00650120
        add     esp, 0x8
        mov     esi, eax
    L_d5e:
        mov     ecx, dword ptr [g_0080d9bc]
        push    ecx
        mov     dword ptr [esi + 0x18], 0x1
        mov     dword ptr [esi + 0x40], ebx
        call    FUN_0064fe70
        mov     ecx, dword ptr [g_0080da64]
        mov     edi, dword ptr [ecx]
        mov     edx, dword ptr [ecx + 0x4]
        mov     dword ptr [esi + 0x3c], eax
        sub     edx, edi
        mov     eax, 0x2aaaaaab
        imul    edx
        sar     edx, 0x1
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     eax, dword ptr [ecx + 0x8]
        lea     edi, [ecx + 0x4]
        mov     dword ptr [esi + 0x1c], edx
        mov     esi, dword ptr [edi]
        add     esp, 0x4
        cmp     esi, eax
        jz      L_dc0
        cmp     esi, ebx
        jz      L_db6
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, esi
        call    FUN_0065a5d0
    L_db6:
        add     esi, 0xc
        mov     dword ptr [edi], esi
        jmp     L_c47
    L_dc0:
        push    0x1
        lea     edx, [esp + 0x18]
        push    edx
        push    esi
        call    FUN_0065a3e0
        jmp     L_c47
    L_dd2:
        push    ebp
        call    FUN_004084e0
        mov     esi, dword ptr [esp + 0x28]
        add     esp, 0x4
        cmp     esi, ebx
        pop     edi
        pop     ebp
        jz      L_df5
        mov     ecx, esi
        call    FUN_0040de20
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    L_df5:
        mov     ecx, dword ptr [esp + 0x18]
        cmp     ecx, ebx
        jz      L_e03
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
    L_e03:
        mov     esi, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x14]
        sub     ecx, esi
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 0x1
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        push    edx
        push    esi
        lea     ecx, [esp + 0x1c]
        call    FUN_005b8a00
        call    FUN_006f49a0
        pop     esi
        pop     ebx
        add     esp, 0x128
        ret
    }
}
