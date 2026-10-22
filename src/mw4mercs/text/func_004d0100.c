/*
 * FUN_004d0100 (1228 B) — MLR network subsystem: game-model load/update
 * (__thiscall, RET 8). Validates a path, loads a model, iterates a
 * connection list, builds a model table, and updates the global model
 * pointer. Large dispatcher with several cleanup paths.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_007b8ef0;
extern int g_007db0b0;
extern int g_007b8c0c;
extern int g_007b8c10;
extern int g_007dc574;
extern int g_007db0ac;
extern unsigned short g_007db0ae;
extern void FUN_006fc4d0(void);
extern void FUN_006fab90(void);
extern void FUN_00412570(void);
extern void FUN_004d2230(void);
extern void FUN_004d24f0(void);
extern void FUN_004d2630(void);
extern void FUN_004d2840(void);
extern void FUN_004da920(void);
extern void FUN_0040d9b0(void);
extern void FUN_0040dca0(void);
extern void FUN_004cfbd0(void);
extern void FUN_004d05d0(void);
extern void FUN_0041ee70(void);
extern void FUN_00412b80(void);
extern void FUN_0040ed60(void);
extern void FUN_00411bf0(void);
extern void FUN_004125e0(void);
extern void FUN_00412740(void);
extern void FUN_004084e0(void);
extern void FUN_004d2000(void);
extern void FUN_004cff60(void);
extern void FUN_004d2680(void);
extern void FUN_00412e70(void);
extern void FUN_004d1e10(void);
extern void FUN_0040ecc0(void);
extern void FUN_004084d0(void);
extern void FUN_0040dd50(void);
extern void FUN_0041f8d0(void);
extern void FUN_00415180(void);
extern void FUN_00412b60(void);
extern void FUN_0040de20(void);
extern void FUN_0041e690(void);
extern void FUN_004cfc90(void);
extern void FUN_0041e710(void);
extern void FUN_0041ef60(void);
extern void FUN_004d21c0(void);

__declspec(naked) void FUN_004d0100(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x1f0
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0xc]
        push    esi
        mov     ebx, ecx
        call    FUN_006fc4d0
        test    al, al
        jnz     loc_12d
        push    esi
        push    0x7723f4
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      loc_12d
        int     3
loc_12d:
        mov     al, byte ptr [g_007b8ef0]
        test    al, al
        jz      loc_142
        mov     esi, 0x7b8de8
        mov     byte ptr [g_007b8ef0], 0x0
loc_142:
        push    esi
        lea     ecx, [ebp + 0xc]
        call    FUN_00412570
        mov     eax, dword ptr [ebp + 0xc]
        mov     esi, dword ptr [ebp + 0x8]
        push    0x0
        push    eax
        mov     ecx, esi
        call    FUN_004d2230
        mov     eax, dword ptr [esi + 0x3c]
        test    eax, eax
        jz      loc_1bd
        mov     eax, dword ptr [esi + 0x1c]
        test    eax, eax
        jbe     loc_1bd
        mov     ecx, esi
        call    FUN_004d24f0
        test    al, al
        jz      loc_1bd
        mov     eax, dword ptr [g_007db0b0]
        test    eax, eax
        jz      loc_196
        mov     ecx, esi
        call    FUN_004d2630
        test    al, al
        jnz     loc_196
        mov     ecx, dword ptr [g_007db0b0]
        push    ecx
        mov     ecx, esi
        call    FUN_004d2840
loc_196:
        add     esi, 0x40
        push    esi
        call    FUN_004da920
        mov     edx, dword ptr [g_007b8c0c]
        mov     esi, dword ptr [edx + eax*4]
        add     esp, 0x4
        lea     ecx, [ebp + 0xc]
        call    FUN_0040d9b0
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
loc_1bd:
        mov     eax, dword ptr [ebp + 0xc]
        push    edi
        push    0x0
        push    0x0
        push    eax
        lea     ecx, [ebp - 0x15c]
        call    FUN_0040dca0
        lea     ecx, [ebp - 0x15c]
        push    ecx
        mov     ecx, ebx
        call    FUN_004cfbd0
        mov     eax, dword ptr [g_007b8c10]
        mov     edx, dword ptr [g_007db0b0]
        push    eax
        lea     ecx, [ebp - 0x54]
        mov     dword ptr [ebp - 0x1c], edx
        call    FUN_004d05d0
        push    0x0
        lea     ecx, [ebp - 0x44]
        call    FUN_0041ee70
        lea     ecx, [ebp - 0x150]
        push    ecx
        mov     edi, 0x76d1f0
        lea     ecx, [ebp - 0x54]
        mov     dword ptr [ebp - 0x54], edi
        call    FUN_00412b80
        push    0x7723e8
        lea     ecx, [ebp - 0x15c]
        call    FUN_0040ed60
        push    0x1
        lea     edx, [ebp - 0x18]
        push    edx
        push    0x7723e0
        mov     ecx, eax
        call    FUN_00411bf0
        mov     eax, dword ptr [g_007b8c10]
        push    eax
        lea     ecx, [ebp - 0x8c]
        call    FUN_004d05d0
        push    0x0
        lea     ecx, [ebp - 0x7c]
        call    FUN_0041ee70
        lea     ecx, [ebp - 0x150]
        push    ecx
        lea     ecx, [ebp - 0x8c]
        mov     dword ptr [ebp - 0x8c], edi
        call    FUN_00412b80
        mov     eax, dword ptr [ebp + 0xc]
        test    eax, eax
        lea     edx, [ebp - 0x8c]
        mov     dword ptr [g_007db0b0], edx
        mov     dword ptr [ebp - 0x4], eax
        jz      loc_285
        inc     byte ptr [eax - 0x1]
loc_285:
        mov     eax, dword ptr [ebp - 0x4]
        push    0x7723c8
        push    eax
        lea     ecx, [ebp - 0x10]
        call    FUN_004125e0
        push    eax
        lea     ecx, [ebp - 0x4]
        call    FUN_00412740
        mov     eax, dword ptr [ebp - 0x10]
        test    eax, eax
        jz      loc_2b9
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     loc_2b9
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
loc_2b9:
        mov     ecx, dword ptr [ebp - 0x4]
        push    0x0
        push    ecx
        lea     ecx, [ebp - 0x1a0]
        call    FUN_004d2000
        push    0x0
        lea     ecx, [ebp - 0x10c]
        call    FUN_0041ee70
        mov     eax, dword ptr [ebp - 0x18]
        lea     edx, [ebp - 0x15c]
        push    edx
        push    eax
        lea     ecx, [ebp - 0x10c]
        push    ecx
        mov     ecx, ebx
        call    FUN_004cff60
        lea     edx, [ebp - 0x8c]
        mov     dword ptr [ebp - 0x10], eax
        push    edx
        lea     eax, [ebp - 0x10c]
        push    eax
        lea     ecx, [ebp - 0x1a0]
        call    FUN_004d2680
        lea     ecx, [ebp - 0x1a0]
        call    FUN_004d2630
        test    al, al
        jnz     loc_32a
        lea     ecx, [ebp - 0x8c]
        push    ecx
        lea     ecx, [ebp - 0x54]
        call    FUN_00412e70
loc_32a:
        mov     ecx, dword ptr [g_007dc574]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0xc]
        mov     edi, eax
        xor     eax, eax
        push    edi
        push    0x7db0ac
        lea     ecx, [ebp - 0xc]
        mov     dword ptr [ebp - 0xc], eax
        mov     dword ptr [ebp - 0x8], eax
        call    FUN_004d1e10
        mov     eax, dword ptr [ebp - 0xc]
        mov     cx, word ptr [ebp - 0x160]
        mov     word ptr [eax], cx
        mov     dx, word ptr [ebp - 0x15e]
        mov     word ptr [eax + 0x2], dx
        mov     eax, 0x1
        cmp     edi, eax
        jle     loc_390
        mov     edx, dword ptr [g_007db0ac]
        mov     si, word ptr [g_007db0ae]
loc_37b:
        mov     ecx, dword ptr [ebp - 0xc]
        lea     ecx, [ecx + eax*4]
        inc     eax
        cmp     eax, edi
        mov     word ptr [ecx], dx
        mov     word ptr [ecx + 0x2], si
        jl      loc_37b
        mov     esi, dword ptr [ebp + 0x8]
loc_390:
        push    0x7723d4
        lea     ecx, [ebp - 0x15c]
        call    FUN_0040ecc0
        mov     edi, eax
        test    edi, edi
        jz      loc_4e5
        push    0xc
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      loc_3d1
        mov     edx, dword ptr [edi + 0x18]
        lea     ecx, [edi + 0x18]
        mov     dword ptr [eax + 0x4], ecx
        mov     ecx, eax
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax], 0x76cc9c
        mov     dword ptr [ebp - 0x14], ecx
        jmp     loc_3db
loc_3d1:
        mov     dword ptr [ebp - 0x14], 0x0
loc_3d8:
        mov     ecx, dword ptr [ebp - 0x14]
loc_3db:
        mov     eax, dword ptr [ecx + 0x8]
        test    eax, eax
        jz      loc_4dc
        mov     edi, dword ptr [eax]
        test    edi, edi
        mov     eax, dword ptr [eax + 0x4]
        mov     dword ptr [ecx + 0x8], eax
        jz      loc_4dc
        mov     ecx, dword ptr [g_007dc574]
        mov     eax, dword ptr [edi + 0x14]
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x10]
        mov     edx, dword ptr [ebp - 0xc]
        mov     ecx, dword ptr [ebp + 0x8]
        mov     cx, word ptr [ecx + 0x40]
        mov     esi, eax
        lea     eax, [edx + esi*4]
        mov     word ptr [eax], cx
        push    0x0
        lea     ecx, [ebp - 0x1f0]
        mov     word ptr [eax + 0x2], 0x0
        call    FUN_0040dd50
        lea     eax, [ebp - 0x1f0]
        push    eax
        mov     ecx, edi
        call    FUN_0041f8d0
        mov     ecx, dword ptr [g_007b8c10]
        push    ecx
        lea     ecx, [ebp - 0xc4]
        call    FUN_00415180
        xor     eax, eax
        push    eax
        lea     ecx, [ebp - 0xb4]
        mov     dword ptr [ebp - 0xbc], eax
        mov     dword ptr [ebp - 0xb8], eax
        mov     dword ptr [ebp - 0xc4], 0x76cd9c
        call    FUN_0041ee70
        lea     edx, [ebp - 0x1e4]
        push    edx
        lea     ecx, [ebp - 0xc4]
        mov     dword ptr [ebp - 0xc4], 0x76d1f0
        call    FUN_00412b80
        mov     ecx, dword ptr [ebp - 0x10]
        mov     edx, dword ptr [ebx]
        lea     eax, [ebp - 0xc4]
        mov     dword ptr [g_007db0b0], eax
        push    esi
        lea     eax, [ebp - 0x1f0]
        push    eax
        mov     eax, dword ptr [ebp - 0xc]
        push    ecx
        lea     ecx, [eax + esi*4]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx + 0x8]
        lea     edx, [ebp - 0xc4]
        push    edx
        lea     ecx, [ebp - 0x54]
        call    FUN_00412e70
        lea     ecx, [ebp - 0xc4]
        call    FUN_00412b60
        lea     ecx, [ebp - 0x1f0]
        call    FUN_0040de20
        mov     esi, dword ptr [ebp + 0x8]
        jmp     loc_3d8
loc_4dc:
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
loc_4e5:
        mov     eax, dword ptr [ebp - 0x8]
        mov     edx, dword ptr [ebp - 0xc]
        push    0x0
        lea     ecx, [eax*4 + 0x0]
        push    ecx
        push    edx
        lea     ecx, [ebp - 0xe4]
        call    FUN_0041e690
        lea     eax, [ebp - 0x54]
        push    eax
        lea     ecx, [ebp - 0xe4]
        push    ecx
        mov     ecx, esi
        call    FUN_004d2680
        mov     edi, dword ptr [ebp - 0x1c]
        test    edi, edi
        mov     dword ptr [g_007db0b0], edi
        jz      loc_536
        mov     ecx, esi
        call    FUN_004d2630
        test    al, al
        jnz     loc_536
        lea     edx, [ebp - 0x54]
        push    edx
        mov     ecx, edi
        call    FUN_00412e70
loc_536:
        mov     ecx, ebx
        call    FUN_004cfc90
        lea     ecx, [ebp - 0xe4]
        call    FUN_0041e710
        mov     eax, dword ptr [ebp - 0xc]
        test    eax, eax
        pop     edi
        jz      loc_559
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
loc_559:
        lea     ecx, [ebp - 0x10c]
        call    FUN_0041ef60
        lea     ecx, [ebp - 0x1a0]
        call    FUN_004d21c0
        mov     eax, dword ptr [ebp - 0x4]
        test    eax, eax
        jz      loc_589
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     loc_589
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
loc_589:
        lea     ecx, [ebp - 0x8c]
        call    FUN_00412b60
        lea     ecx, [ebp - 0x54]
        call    FUN_00412b60
        lea     ecx, [ebp - 0x15c]
        call    FUN_0040de20
        mov     eax, dword ptr [ebp + 0xc]
        test    eax, eax
        jz      loc_5c1
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     loc_5c1
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
loc_5c1:
        mov     eax, dword ptr [ebp - 0x10]
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}
