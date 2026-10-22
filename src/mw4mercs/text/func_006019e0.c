/*
 * FUN_006019e0 (594 B) — Iterates over two global object tables
 * (DAT_007dab44 ^ DAT_007dab40, XOR-obfuscated base), counting
 * per-slot entries and conditionally invoking FUN_00621fd0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;   /* 0x007dab44 */
extern int g_7dab40;   /* 0x007dab40 */

extern void *__cdecl FUN_0041fd80(void);
extern void __cdecl FUN_00621fd0(void);

__declspec(naked) void FUN_006019e0(void)
{
    __asm {
        sub     esp, 0x38
        mov     eax, dword ptr [g_7dab44]
        push    esi
        mov     dword ptr [esp + 0x8], ecx
        mov     ecx, dword ptr [eax]
        push    edi
        xor     ecx, dword ptr [g_7dab40]
        mov     edx, dword ptr [ecx + 0xc]
        lea     eax, [ecx + 0xc]
        xor     edx, 0x85739531
        mov     ecx, dword ptr [edx + 0x50]
        mov     edx, dword ptr [ecx + 0xe4]
        test    edx, edx
        jz      L_c2c
        push    ebx
        mov     ebx, dword ptr [eax]
        xor     ebx, 0x85739531
        mov     ecx, 0x8
        xor     eax, eax
        lea     edi, [esp + 0x24]
        lea     edx, [ebx + 0x3584]
        push    ebp
        rep stosd
        mov     dword ptr [esp + 0x20], edx
        mov     esi, 0xff
L_a39:
        mov     al, byte ptr [edx + -0x4c]
        test    al, al
        jz      L_a76
        mov     eax, dword ptr [edx]
        test    eax, eax
        jz      L_a76
        mov     eax, dword ptr [eax + 0x170]
        test    eax, eax
        jz      L_a76
        mov     ecx, dword ptr [eax + 0x4]
        cmp     dword ptr [ecx], 0x429
        jnz     L_a76
        mov     ecx, dword ptr [eax + 0x4cc]
        mov     eax, dword ptr [eax + 0x10]
        shr     eax, 0x13
        test    al, 0x1
        mov     byte ptr [esp + ecx*1 + 0x18], 0x1
        jnz     L_a76
        lea     eax, [esp + ecx*4 + 0x28]
        inc     dword ptr [eax]
L_a76:
        add     edx, 0x2038
        dec     esi
        jnz     L_a39
        lea     edx, [ebx + 0x205d30]
        mov     dword ptr [esp + 0x24], edx
        mov     esi, 0x18
L_a8e:
        mov     eax, dword ptr [edx]
        test    eax, eax
        jz      L_aaf
        mov     ecx, dword ptr [eax + 0x4cc]
        mov     eax, dword ptr [eax + 0x10]
        shr     eax, 0x13
        test    al, 0x1
        mov     byte ptr [esp + ecx*1 + 0x18], 0x1
        jnz     L_aaf
        lea     eax, [esp + ecx*4 + 0x28]
        inc     dword ptr [eax]
L_aaf:
        add     edx, 0x22ac
        dec     esi
        jnz     L_a8e
        mov     byte ptr [esp + 0x13], 0x1
        xor     eax, eax
        lea     ecx, [esp + 0x28]
L_ac3:
        cmp     dword ptr [ecx], 0x0
        jnz     L_ad3
        inc     eax
        add     ecx, 0x4
        cmp     eax, 0x8
        jl      L_ac3
        jmp     L_b21
L_ad3:
        mov     ecx, dword ptr [ebx + eax*4 + 0x204d00]
        call    FUN_0041fd80
        mov     ecx, dword ptr [eax + 0x514]
        mov     dword ptr [esp + 0x18], ecx
        xor     esi, esi
        lea     edi, [esp + 0x28]
        lea     ebp, [ebx + 0x204d00]
L_af5:
        cmp     dword ptr [edi], 0x0
        jz      L_b0e
        mov     ecx, dword ptr [ebp]
        call    FUN_0041fd80
        mov     edx, dword ptr [esp + 0x18]
        cmp     edx, dword ptr [eax + 0x514]
        jnz     L_b1c
L_b0e:
        inc     esi
        add     edi, 0x4
        add     ebp, 0x4
        cmp     esi, 0x8
        jl      L_af5
        jmp     L_b21
L_b1c:
        mov     byte ptr [esp + 0x13], 0x0
L_b21:
        xor     ebp, ebp
        mov     byte ptr [esp + 0x12], 0x0
        add     ebx, 0x204d00
L_b2e:
        mov     al, byte ptr [esp + 0x12]
        test    al, al
        jnz     L_b7c
        mov     ecx, dword ptr [ebx]
        call    FUN_0041fd80
        cmp     ebp, 0x8
        mov     eax, dword ptr [eax + 0x514]
        mov     dword ptr [esp + 0x18], eax
        mov     esi, ebp
        jge     L_b73
        mov     edi, ebx
L_b50:
        mov     ecx, dword ptr [edi]
        call    FUN_0041fd80
        mov     ecx, dword ptr [esp + 0x18]
        cmp     ecx, dword ptr [eax + 0x514]
        jnz     L_b6e
        inc     esi
        add     edi, 0x4
        cmp     esi, 0x8
        jl      L_b50
        jmp     L_b73
L_b6e:
        mov     byte ptr [esp + 0x12], 0x1
L_b73:
        inc     ebp
        add     ebx, 0x4
        cmp     ebp, 0x8
        jl      L_b2e
L_b7c:
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        pop     ebp
        pop     ebx
        jz      L_c2c
        mov     al, byte ptr [esp + 0xa]
        test    al, al
        jz      L_c2c
        mov     esi, dword ptr [esp + 0x18]
        mov     edi, 0xff
L_b9f:
        mov     al, byte ptr [esi + -0x4c]
        test    al, al
        jz      L_be6
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_be6
        mov     eax, dword ptr [eax + 0x170]
        test    eax, eax
        jz      L_be6
        mov     edx, dword ptr [eax + 0x4]
        cmp     dword ptr [edx], 0x429
        jnz     L_be6
        mov     ecx, dword ptr [eax + 0x4cc]
        mov     edx, dword ptr [esp + ecx*4 + 0x20]
        test    edx, edx
        jle     L_be6
        mov     edx, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [edx + 0x225c]
        push    0x1
        add     eax, 0x14
        push    eax
        push    0x34
        call    FUN_00621fd0
L_be6:
        add     esi, 0x2038
        dec     edi
        jnz     L_b9f
        mov     esi, dword ptr [esp + 0x1c]
        mov     edi, 0x18
L_bf8:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_c23
        mov     ecx, dword ptr [eax + 0x4cc]
        mov     edx, dword ptr [esp + ecx*4 + 0x20]
        test    edx, edx
        jle     L_c23
        mov     edx, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [edx + 0x225c]
        push    0x1
        add     eax, 0x14
        push    eax
        push    0x34
        call    FUN_00621fd0
L_c23:
        add     esi, 0x22ac
        dec     edi
        jnz     L_bf8
L_c2c:
        pop     edi
        pop     esi
        add     esp, 0x38
        ret
    }
}
