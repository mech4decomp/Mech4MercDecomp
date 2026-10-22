/*
 * FUN_0068ce40 (719 B) — __fastcall (ECX=this). Iterates a formation list,
 * filters water entries, and rebuilds a float array via several helper
 * calls (FUN_0068d5d0/d570/d550). Complex 0xa0 stack frame with FPU math
 * and a rep movsd copy.
 *
 * __fastcall, plain RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;
extern int g_007f2464;
extern char g_794960[];      /* "water" */
extern int g_007f2564;
extern int g_007f25c8;
extern void *g_0076b2b0;     /* strnicmp IAT */
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00417d80(void);
extern void __cdecl FUN_00420840(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0068d5d0(void);
extern void __cdecl FUN_0068d570(void);
extern void __cdecl FUN_0068d550(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void __cdecl FUN_0068ce40(void)
{
    __asm {
        sub     esp, 0xa0
        mov     eax, dword ptr [g_007dab44]
        mov     edx, dword ptr [g_007dab40]
        push    ebx
        mov     dword ptr [esp + 0x4], ecx
        mov     ecx, dword ptr [eax]
        push    ebp
        push    esi
        xor     ecx, edx
        mov     esi, dword ptr [ecx + 0x10]
        mov     edx, dword ptr [g_007f2464]
        push    edi
        xor     esi, 0x85739531
        push    edx
        mov     dword ptr [esp + 0x50], 0x0
        mov     dword ptr [esp + 0x54], 0x1
        mov     dword ptr [esp + 0x20], esi
        call    FUN_006f4950
        lea     eax, [esp + 0x4c]
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x28], 0x2
    L_ce96:
        mov     ecx, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [ecx]
        mov     eax, dword ptr [esi + ecx*8 + 0x14]
        test    eax, eax
        mov     dword ptr [esp + 0x30], ecx
        jle     L_d0e5
        mov     edi, dword ptr [esi + ecx*8 + 0x10]
        add     edi, 0x14
        mov     dword ptr [esp + 0x24], edi
        mov     dword ptr [esp + 0x2c], eax
    L_cebb:
        mov     edx, dword ptr [edi - 0x4]
        push    0x5
        push    offset g_794960
        push    edx
        call    dword ptr [g_0076b2b0]
        add     esp, 0xc
        test    eax, eax
        jz      L_d0cb
        mov     ecx, dword ptr [edi]
        call    FUN_0041fd80
        mov     esi, eax
        test    esi, esi
        jz      L_d0cb
        mov     ebp, dword ptr [esi + 0x128]
        test    ebp, ebp
        jnz     L_cf00
        mov     eax, dword ptr [esi + 0x124]
        test    eax, eax
        jz      L_d0cb
    L_cf00:
        mov     eax, dword ptr [g_007f2564]
        mov     ebx, dword ptr [esi + 0x4]
        push    eax
        mov     ecx, ebx
        call    FUN_00415230
        test    al, al
        jz      L_d0cb
        mov     eax, dword ptr [g_007f25c8]
        push    eax
        mov     ecx, ebx
        call    FUN_00415230
        test    al, al
        jnz     L_d0cb
        mov     eax, dword ptr [esi + 0x2fc]
        test    eax, eax
        jz      L_cf43
        mov     eax, dword ptr [esp + 0x30]
        test    eax, eax
        jnz     L_d0cb
    L_cf43:
        mov     eax, ebp
        test    eax, eax
        jnz     L_cf4f
        mov     eax, dword ptr [esi + 0x124]
    L_cf4f:
        mov     ecx, dword ptr [esi + 0xd8]
        add     ecx, 0x80
        push    ecx
        add     eax, 0x10
        push    eax
        lea     ecx, [esp + 0x78]
        call    FUN_00417d80
        lea     edx, [esp + 0x70]
        push    edx
        lea     ecx, [esp + 0x38]
        call    FUN_00420840
        fld     dword ptr [esp + 0x38]
        fsub    dword ptr [esp + 0x34]
        fld     dword ptr [esp + 0x48]
        fsub    dword ptr [esp + 0x44]
        fcompp
        fnstsw  ax
        test    ah, 0x41
        jnz     L_cf97
        mov     ecx, 0x1
        jmp     L_cf99
    L_cf97:
        xor     ecx, ecx
    L_cf99:
        fld     dword ptr [esp + 0x34]
        mov     eax, dword ptr [edi + 0x4]
        fstp    dword ptr [esp + 0x54]
        fld     dword ptr [esp + 0x44]
        mov     byte ptr [esp + 0x68], cl
        mov     ecx, dword ptr [esp + 0x10]
        mov     ebx, dword ptr [ecx + 0x4]
        mov     ebp, dword ptr [ecx + 0x8]
        cmp     ebx, ebp
        fstp    dword ptr [esp + 0x5c]
        fld     dword ptr [esp + 0x38]
        mov     dword ptr [esp + 0x64], eax
        fstp    dword ptr [esp + 0x58]
        fld     dword ptr [esp + 0x48]
        lea     eax, [ecx + 0x8]
        fstp    dword ptr [esp + 0x60]
        jz      L_cff9
        test    ebx, ebx
        jz      L_cfea
        mov     ecx, 0x6
        lea     esi, [esp + 0x54]
        mov     edi, ebx
        rep movsd
        mov     edi, dword ptr [esp + 0x24]
    L_cfea:
        mov     eax, dword ptr [esp + 0x10]
        add     ebx, 0x18
        mov     dword ptr [eax + 0x4], ebx
        jmp     L_d0cb
    L_cff9:
        mov     ecx, dword ptr [esp + 0x10]
        mov     esi, dword ptr [ecx]
        mov     ecx, ebx
        sub     ecx, esi
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 0x2
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        cmp     edx, 0x1
        mov     dword ptr [esp + 0x14], 0x1
        mov     dword ptr [esp + 0x20], edx
        lea     eax, [esp + 0x14]
        jc      L_d02d
        lea     eax, [esp + 0x20]
    L_d02d:
        mov     eax, dword ptr [eax]
        add     eax, edx
        mov     dword ptr [esp + 0x20], eax
        jz      L_d04c
        lea     ecx, [eax + eax*2]
        shl     ecx, 0x3
        push    ecx
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esp + 0x14], eax
        jmp     L_d054
    L_d04c:
        mov     dword ptr [esp + 0x14], 0x0
    L_d054:
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x14]
        push    edx
        push    eax
        push    ebx
        push    esi
        call    FUN_0068d5d0
        lea     ecx, [esp + 0x64]
        mov     edi, eax
        push    ecx
        push    edi
        call    FUN_0068d570
        mov     edx, dword ptr [esp + 0x34]
        push    edx
        add     edi, 0x18
        push    edi
        push    ebx
        push    ebx
        call    FUN_0068d5d0
        mov     ecx, dword ptr [esp + 0x38]
        mov     edi, eax
        sub     ebp, esi
        mov     eax, 0x2aaaaaab
        imul    ebp
        sar     edx, 0x2
        mov     eax, edx
        shr     eax, 0x1f
        add     esp, 0x28
        add     edx, eax
        push    edx
        push    esi
        mov     dword ptr [esp + 0x74], esi
        lea     esi, [ecx + 0x8]
        mov     ecx, esi
        call    FUN_0068d550
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [ecx], eax
        mov     dword ptr [ecx + 0x4], edi
        mov     ecx, dword ptr [esp + 0x20]
        mov     edi, dword ptr [esp + 0x24]
        lea     edx, [ecx + ecx*2]
        lea     eax, [eax + edx*8]
        mov     dword ptr [esi], eax
    L_d0cb:
        mov     eax, dword ptr [esp + 0x2c]
        add     edi, 0x1c
        dec     eax
        mov     dword ptr [esp + 0x24], edi
        mov     dword ptr [esp + 0x2c], eax
        jnz     L_cebb
        mov     esi, dword ptr [esp + 0x1c]
    L_d0e5:
        mov     ecx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x28]
        add     ecx, 0x4
        dec     eax
        mov     dword ptr [esp + 0x18], ecx
        mov     dword ptr [esp + 0x28], eax
        jnz     L_ce96
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xa0
        ret
    }
}
