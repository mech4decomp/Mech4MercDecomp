/*
 * FUN_00652FB0 (515 B) — __cdecl (2 stack params). Iterates two object
 * arrays (via FUN_0041fd80), filters by flags + FUN_00415230, and appends
 * matching pointers to a growable vector (param_2). Uses a manual
 * cookie/obfuscation prologue (XOR ECX with DAT_007dab40, XOR EDI with
 * 0x85739531).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;
extern int g_7dab40;
extern int g_7f268c;
extern int g_7dc890;
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00580760(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005809b0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void __cdecl FUN_00652fb0(void)
{
    __asm {
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        sub     esp, 0x14
        push    ebx
        push    ebp
        push    esi
        xor     ecx, dword ptr [g_7dab40]
        push    edi
        mov     edi, dword ptr [ecx + 0x10]
        xor     edi, 0x85739531
        mov     eax, dword ptr [edi + 0x1c]
        test    eax, eax
        jle     L_5303e
        mov     ebp, dword ptr [edi + 0x18]
        add     ebp, 0x14
        mov     ebx, eax
L_52fdc:
        mov     ecx, dword ptr [ebp]
        call    FUN_0041fd80
        mov     esi, eax
        test    esi, esi
        jz      L_53038
        mov     edx, dword ptr [esi + 0x10]
        shr     edx, 0x13
        test    dl, 0x1
        jnz     L_53038
        cmp     esi, dword ptr [esp + 0x28]
        jz      L_53038
        mov     eax, dword ptr [g_7f268c]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L_53038
        mov     ecx, dword ptr [esp + 0x2c]
        mov     eax, dword ptr [ecx + 0x4]
        cmp     eax, dword ptr [ecx + 0x8]
        mov     dword ptr [esp + 0x18], esi
        jz      L_5302b
        test    eax, eax
        jz      L_53023
        mov     dword ptr [eax], esi
L_53023:
        add     eax, 0x4
        mov     dword ptr [ecx + 0x4], eax
        jmp     L_53038
L_5302b:
        push    0x1
        lea     edx, [esp + 0x1c]
        push    edx
        push    eax
        call    FUN_00580760
L_53038:
        add     ebp, 0x1c
        dec     ebx
        jnz     L_52fdc
L_5303e:
        mov     eax, dword ptr [edi + 0x2c]
        test    eax, eax
        jle     L_531ab
        mov     edi, dword ptr [edi + 0x28]
        add     edi, 0x14
        mov     dword ptr [esp + 0x14], edi
        mov     dword ptr [esp + 0x18], eax
L_53057:
        mov     ecx, dword ptr [edi]
        call    FUN_0041fd80
        mov     esi, eax
        test    esi, esi
        jz      L_53195
        mov     eax, dword ptr [g_7dc890]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L_53195
        mov     ebx, dword ptr [esi + 0x170]
        test    ebx, ebx
        mov     dword ptr [esp + 0x20], ebx
        jz      L_53195
        mov     eax, dword ptr [ebx + 0x10]
        shr     eax, 0x13
        test    al, 0x1
        jnz     L_53195
        cmp     ebx, dword ptr [esp + 0x28]
        jz      L_53195
        mov     eax, dword ptr [g_7f268c]
        mov     ecx, dword ptr [ebx + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L_53195
        mov     ebp, dword ptr [esp + 0x2c]
        mov     esi, dword ptr [ebp + 0x4]
        cmp     esi, dword ptr [ebp + 0x8]
        jz      L_530db
        test    esi, esi
        jz      L_530d0
        mov     dword ptr [esi], ebx
L_530d0:
        add     esi, 0x4
        mov     dword ptr [ebp + 0x4], esi
        jmp     L_53195
L_530db:
        mov     ebx, dword ptr [ebp]
        mov     eax, esi
        sub     eax, ebx
        sar     eax, 0x2
        cmp     eax, 0x1
        mov     dword ptr [esp + 0x10], 0x1
        mov     dword ptr [esp + 0x1c], eax
        lea     ecx, [esp + 0x10]
        jc      L_530fe
        lea     ecx, [esp + 0x1c]
L_530fe:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x1c], ecx
        jz      L_5311a
        shl     ecx, 0x2
        push    ecx
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esp + 0x10], eax
        jmp     L_53122
L_5311a:
        mov     dword ptr [esp + 0x10], 0x0
L_53122:
        cmp     ebx, esi
        mov     edi, dword ptr [esp + 0x10]
        jz      L_53144
        mov     ebp, ebx
L_5312c:
        push    ebp
        push    edi
        call    FUN_005809b0
        add     ebp, 0x4
        add     esp, 0x8
        add     edi, 0x4
        cmp     ebp, esi
        jnz     L_5312c
        mov     ebp, dword ptr [esp + 0x2c]
L_53144:
        test    edi, edi
        jz      L_5314e
        mov     edx, dword ptr [esp + 0x20]
        mov     dword ptr [edi], edx
L_5314e:
        add     edi, 0x4
        cmp     esi, esi
        jz      L_5316c
        mov     eax, esi
        sub     eax, edi
L_53159:
        test    edi, edi
        jz      L_53162
        mov     ecx, dword ptr [eax + edi*0x1]
        mov     dword ptr [edi], ecx
L_53162:
        add     edi, 0x4
        lea     edx, [eax + edi*0x1]
        cmp     edx, esi
        jnz     L_53159
L_5316c:
        test    ebx, ebx
        mov     dword ptr [esp + 0x20], ebx
        jz      L_5317d
        push    ebx
        call    FUN_004084e0
        add     esp, 0x4
L_5317d:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x1c]
        lea     edx, [eax + ecx*0x4]
        mov     dword ptr [ebp + 0x4], edi
        mov     edi, dword ptr [esp + 0x14]
        mov     dword ptr [ebp], eax
        mov     dword ptr [ebp + 0x8], edx
L_53195:
        mov     eax, dword ptr [esp + 0x18]
        add     edi, 0x1c
        dec     eax
        mov     dword ptr [esp + 0x14], edi
        mov     dword ptr [esp + 0x18], eax
        jnz     L_53057
L_531ab:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret
    }
}
