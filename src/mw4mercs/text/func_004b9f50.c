/*
 * FUN_004b9f50 (704 B) — MLR subsystem __thiscall ctor with buffer
 * allocation/resize. RET 0x4.
 *
 * CFLAGS: /O1
 */

extern int g_007daa4c;
extern void FUN_004c6430(void);
extern void FUN_004084d0(void);
extern void FUN_004084e0(void);
extern void FUN_0042bb10(void);
extern void FUN_0044cdf0(void);

__declspec(naked) void FUN_004b9f50(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [g_007daa4c]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_004c6430
        mov     ecx, dword ptr [esi+0x18]
        mov     ebx, dword ptr [esp+0x18]
        xor     edx, edx
        mov     dword ptr [esi+0x144], edx
        shr     ecx, 0xa
        mov     dword ptr [esi+0x148], edx
        mov     dword ptr [esi+0x14c], edx
        and     ecx, 0x1
        mov     eax, dword ptr [ecx*4 + 0x7b34c0]
        mov     dword ptr [esi+0x150], edx
        mov     dword ptr [esi+0x154], edx
        mov     ebp, edx
        cmp     ebx, ebp
        mov     dword ptr [esi+0x158], edx
        mov     dword ptr [esi+0x15c], edx
        mov     dword ptr [esi+0x160], edx
        mov     dword ptr [esi], 0x770fac
        mov     dword ptr [esi+0x1c], 0x4c6f00
        mov     dword ptr [esi+0x130], 0x4c7c50
        mov     dword ptr [esi+0x134], 0x4c8200
        mov     dword ptr [esi+0x13c], eax
        jz      L_4ba044
        cmp     ebx, edx
        jbe     L_4ba023
        push    ebx
        call    FUN_004084d0
        mov     edi, dword ptr [esi+0x15c]
        add     esp, 0x4
        test    edi, edi
        mov     ecx, eax
        mov     dword ptr [esp+0x18], ecx
        jz      L_4ba01b
        cmp     ebx, ebp
        mov     eax, ebx
        jc      L_4b9ffa
        mov     eax, ebp
L_4b9ffa:
        mov     edx, eax
        dec     eax
        test    edx, edx
        jz      L_4ba00e
L_4ba001:
        mov     dl, byte ptr [edi+eax*1]
        mov     byte ptr [eax+ecx*1], dl
        mov     edx, eax
        dec     eax
        test    edx, edx
        jnz     L_4ba001
L_4ba00e:
        push    edi
        call    FUN_004084e0
        mov     ecx, dword ptr [esp+0x1c]
        add     esp, 0x4
L_4ba01b:
        mov     dword ptr [esi+0x15c], ecx
        jmp     L_4ba03c
L_4ba023:
        mov     eax, dword ptr [esi+0x15c]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi+0x15c], 0x0
L_4ba03c:
        mov     dword ptr [esi+0x160], ebx
        xor     edx, edx
L_4ba044:
        cmp     ebx, edx
        jbe     L_4ba060
        mov     edi, dword ptr [esi+0x15c]
        mov     ecx, ebx
        mov     ebp, ecx
        shr     ecx, 0x2
        xor     eax, eax
        rep stosd
        mov     ecx, ebp
        and     ecx, 0x3
        rep stosb
L_4ba060:
        lea     edi, [ebx*4 + 0x0]
        mov     ebx, dword ptr [esi+0x148]
        cmp     edi, ebx
        mov     dword ptr [esp+0x18], edi
        jz      L_4ba129
        cmp     edi, edx
        jbe     L_4ba108
        mov     ecx, edi
        shl     ecx, 0x4
        push    ecx
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_4ba0a0
        lea     edx, [edi + -0x1]
        mov     dword ptr [esp+0x10], edx
        mov     dword ptr [esp+0x10], eax
        jmp     L_4ba0a8
L_4ba0a0:
        mov     dword ptr [esp+0x10], 0x0
L_4ba0a8:
        mov     ebp, dword ptr [esi+0x144]
        test    ebp, ebp
        jz      L_4ba0fc
        cmp     edi, ebx
        mov     edx, edi
        jc      L_4ba0ba
        mov     edx, ebx
L_4ba0ba:
        mov     eax, edx
        dec     edx
        test    eax, eax
        jz      L_4ba0f3
        mov     ebx, dword ptr [esp+0x10]
        mov     ecx, edx
        shl     ecx, 0x4
        lea     eax, [ecx + ebp*1]
        lea     ecx, [ecx + ebx*1 + 0x8]
        inc     edx
L_4ba0d2:
        mov     ebx, dword ptr [eax]
        mov     dword ptr [ecx + -0x8], ebx
        mov     ebx, dword ptr [eax+0x4]
        mov     dword ptr [ecx + -0x4], ebx
        mov     ebx, dword ptr [eax+0x8]
        mov     dword ptr [ecx], ebx
        mov     ebx, dword ptr [eax+0xc]
        mov     dword ptr [ecx+0x4], ebx
        dec     edx
        sub     eax, 0x10
        sub     ecx, 0x10
        test    edx, edx
        ja      L_4ba0d2
L_4ba0f3:
        push    ebp
        call    FUN_004084e0
        add     esp, 0x4
L_4ba0fc:
        mov     ecx, dword ptr [esp+0x10]
        mov     dword ptr [esi+0x144], ecx
        jmp     L_4ba121
L_4ba108:
        mov     edx, dword ptr [esi+0x144]
        push    edx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi+0x144], 0x0
L_4ba121:
        mov     dword ptr [esi+0x148], edi
        xor     edx, edx
L_4ba129:
        mov     ebp, dword ptr [esi+0x150]
        cmp     edi, ebp
        jz      L_4ba1fa
        cmp     edi, edx
        jbe     L_4ba1db
        mov     eax, edi
        shl     eax, 0x4
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_4ba178
        lea     ebx, [edi + -0x1]
        test    ebx, ebx
        jl      L_4ba172
        lea     ecx, [eax + 0x4]
        inc     ebx
        mov     edx, 0xbf800000
L_4ba161:
        mov     dword ptr [ecx + 0x4], edx
        mov     dword ptr [ecx], edx
        mov     dword ptr [ecx + -0x4], edx
        mov     dword ptr [ecx + 0x8], edx
        add     ecx, 0x10
        dec     ebx
        jnz     L_4ba161
L_4ba172:
        mov     dword ptr [esp+0x10], eax
        jmp     L_4ba184
L_4ba178:
        mov     dword ptr [esp+0x10], 0x0
        mov     eax, dword ptr [esp+0x10]
L_4ba184:
        mov     ecx, dword ptr [esi+0x14c]
        test    ecx, ecx
        jz      L_4ba1d3
        cmp     edi, ebp
        mov     ebx, edi
        jc      L_4ba196
        mov     ebx, ebp
L_4ba196:
        mov     edx, ebx
        dec     ebx
        test    edx, edx
        jz      L_4ba1c0
        mov     edi, ebx
        shl     edi, 0x4
        mov     ebp, ecx
        add     edi, eax
        sub     ebp, eax
        inc     ebx
L_4ba1a9:
        lea     eax, [edi + ebp*1]
        push    eax
        mov     ecx, edi
        call    FUN_0042bb10
        dec     ebx
        sub     edi, 0x10
        test    ebx, ebx
        ja      L_4ba1a9
        mov     edi, dword ptr [esp+0x18]
L_4ba1c0:
        mov     eax, dword ptr [esi+0x14c]
        push    eax
        call    FUN_004084e0
        mov     eax, dword ptr [esp+0x14]
        add     esp, 0x4
L_4ba1d3:
        mov     dword ptr [esi+0x14c], eax
        jmp     L_4ba1f4
L_4ba1db:
        mov     ecx, dword ptr [esi+0x14c]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi+0x14c], 0x0
L_4ba1f4:
        mov     dword ptr [esi+0x150], edi
L_4ba1fa:
        push    edi
        lea     ecx, [esi + 0x154]
        call    FUN_0044cdf0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x4
    }
}
