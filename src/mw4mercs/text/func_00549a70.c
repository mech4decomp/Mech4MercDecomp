/* func_00549a70.c - inline-asm transcription of FUN_00549a70 (2063 B) */

extern int g_007b8d88;
extern int g_007b8d8c;
extern int g_007b8d90;
extern int g_007b8c10;
extern int g_007f2530;
extern int g_007f2534;
extern int g_007dd230;
extern int g_007dab44;
extern int g_007dab40;
extern short g_007db0ac;
extern short g_007db0ae;

extern void __cdecl FUN_004f9c40(void);
extern void __cdecl FUN_0041fc80(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_0055e240(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_0054a880(void);
extern void __cdecl FUN_00637ac0(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004ecfb0(void);
extern void __cdecl FUN_00558800(void);
extern void __cdecl FUN_004c8eb0(void);
extern void __cdecl FUN_0054a300(void);

void __declspec(naked) FUN_00549a70(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x44
        mov     eax, dword ptr [ebp+0x14]
        mov     edx, dword ptr [ebp+0xc]
        push    ebx
        push    esi
        push    edi
        push    eax
        mov     eax, dword ptr [ebp+0x8]
        mov     esi, ecx
        mov     ecx, dword ptr [ebp+0x10]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_004f9c40
        xor     ebx, ebx
        mov     dword ptr [esi+0x2d4], ebx
        mov     dword ptr [esi+0x2d8], ebx
        mov     eax, 0x3f800000
        lea     edi, [esi+0x318]
        mov     dword ptr [esi+0x2dc], ebx
        mov     dword ptr [esi+0x2e0], ebx
        mov     dword ptr [esi+0x2f4], ebx
        mov     dword ptr [esi+0x2f0], ebx
        push    ebx
        mov     ecx, edi
        mov     dword ptr [esi+0x2e8], ebx
        mov     dword ptr [esi+0x2e4], ebx
        mov     dword ptr [esi+0x30c], ebx
        mov     dword ptr [esi+0x308], ebx
        mov     dword ptr [esi+0x314], eax
        mov     dword ptr [esi+0x310], eax
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x77ceac
        lea     edi, [esi+0x5b0]
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        mov     ecx, dword ptr [g_007b8d88]
        mov     edx, dword ptr [g_007b8d8c]
        mov     eax, dword ptr [g_007b8d90]
        mov     dword ptr [edi], 0x773328
        mov     dword ptr [esi+0x5bc], ecx
        mov     dword ptr [esi+0x5c8], ecx
        mov     dword ptr [esi+0x5c0], edx
        mov     dword ptr [esi+0x5c4], eax
        mov     dword ptr [esi+0x608], ecx
        lea     edi, [esi+0x65c]
        mov     dword ptr [esi+0x5cc], edx
        mov     dword ptr [esi+0x5d0], eax
        push    ebx
        mov     ecx, edi
        mov     dword ptr [esi+0x5b8], ebx
        mov     byte ptr [esi+0x5d4], bl
        mov     byte ptr [esi+0x5d5], bl
        mov     byte ptr [esi+0x5d6], bl
        mov     dword ptr [esi+0x60c], edx
        mov     dword ptr [esi+0x610], eax
        mov     byte ptr [esi+0x614], bl
        mov     byte ptr [esi+0x615], 1
        mov     dword ptr [esi+0x618], ebx
        mov     dword ptr [esi+0x61c], 3
        mov     byte ptr [esi+0x620], bl
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x773328
        lea     edi, [esi+0x664]
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x773328
        lea     edi, [esi+0x66c]
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x773328
        lea     edi, [esi+0x680]
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x773328
        lea     edi, [esi+0x688]
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x773328
        lea     edi, [esi+0x690]
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x773328
        lea     edi, [esi+0x6a0]
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x773328
        lea     edi, [esi+0x6a8]
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x77ce94
        lea     edi, [esi+0x6c8]
        push    ebx
        mov     ecx, edi
        mov     byte ptr [esi+0x6bc], bl
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x77ce7c
        lea     edi, [esi+0x6d0]
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x77ce7c
        lea     edi, [esi+0x710]
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x77ce7c
        lea     edi, [esi+0x718]
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x77ce7c
        lea     edi, [esi+0x720]
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x77ce7c
        lea     edi, [esi+0x728]
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x77ce7c
        lea     edi, [esi+0x730]
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x77ce7c
        lea     edi, [esi+0x738]
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        mov     ecx, dword ptr [g_007b8c10]
        mov     dword ptr [edi], 0x77ce7c
        lea     edi, [esi+0x744]
        push    ecx
        mov     ecx, edi
        call    FUN_00415180
        push    ebx
        lea     ecx, [edi+0x14]
        mov     dword ptr [edi+0x8], ebx
        mov     dword ptr [edi+0xc], ebx
        mov     dword ptr [edi], 0x76cd9c
        call    FUN_0055e240
        push    ebx
        lea     ecx, [edi+0x1c]
        call    FUN_0055e240
        push    0x7b8d88
        lea     ecx, [edi+0x24]
        mov     dword ptr [edi], 0x77ce78
        mov     dword ptr [edi+0x10], ebx
        call    FUN_0040ccd0
        mov     dword ptr [edi+0x30], ebx
        mov     dword ptr [edi+0xb4], ebx
        mov     byte ptr [edi+0xb9], bl
        mov     edx, dword ptr [g_007b8c10]
        lea     edi, [esi+0x80c]
        push    edx
        mov     ecx, edi
        call    FUN_00415180
        push    ebx
        lea     ecx, [edi+0x14]
        mov     dword ptr [edi+0x8], ebx
        mov     dword ptr [edi+0xc], ebx
        mov     dword ptr [edi], 0x76cd9c
        call    FUN_0055e240
        push    ebx
        lea     ecx, [edi+0x1c]
        call    FUN_0055e240
        push    0x7b8d88
        lea     ecx, [edi+0x24]
        mov     dword ptr [edi], 0x77ce78
        mov     dword ptr [edi+0x10], ebx
        call    FUN_0040ccd0
        mov     dword ptr [edi+0x30], ebx
        mov     dword ptr [edi+0xb4], ebx
        mov     byte ptr [edi+0xb9], bl
        lea     eax, [esi+0x904]
        mov     ecx, 6
L_549D8D:
        mov     dword ptr [eax+0x4], ebx
        mov     dword ptr [eax], ebx
        add     eax, 8
        dec     ecx
        jnz     L_549D8D
        mov     eax, 0x3f800000
        mov     dword ptr [esi+0x644], eax
        mov     dword ptr [esi+0x648], eax
        xor     eax, eax
        mov     dword ptr [esi+0x6d8], ebx
        mov     dword ptr [esi+0x6e0], ebx
        mov     dword ptr [esi+0x6e8], ebx
        mov     dword ptr [esi+0x6f0], ebx
        mov     dword ptr [esi+0x6f8], ebx
        mov     dword ptr [esi+0x700], ebx
        mov     dword ptr [esi], 0x77cd9c
        mov     byte ptr [esi+0x339], bl
        mov     dword ptr [esi+0x564], ebx
        mov     dword ptr [esi+0x568], ebx
        mov     dword ptr [esi+0x320], ebx
        mov     dword ptr [esi+0x6dc], ebx
        mov     dword ptr [esi+0x6e4], ebx
        mov     dword ptr [esi+0x6ec], ebx
        mov     dword ptr [esi+0x6f4], ebx
        mov     dword ptr [esi+0x6fc], ebx
        mov     dword ptr [esi+0x704], ebx
        mov     dword ptr [esi+0x634], ebx
        mov     dword ptr [esi+0x638], ebx
        mov     byte ptr [esi+0x954], 1
        lea     edi, [esi+0x958]
        mov     ecx, 6
        rep     stosd
        mov     eax, dword ptr [g_007f2530]
        mov     ecx, dword ptr [eax+0x4]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax+0x8], edx
        mov     eax, dword ptr [ebp+0xc]
        push    eax
        mov     ecx, esi
        mov     dword ptr [g_007f2534], ebx
        call    FUN_0054a880
        mov     ecx, dword ptr [esi+0x518]
        mov     edx, dword ptr [esi+0x51c]
        mov     eax, dword ptr [esi+0x520]
        lea     edi, [esi+0x518]
        mov     dword ptr [esi+0x56c], ecx
        mov     dword ptr [esi+0x570], edx
        mov     ecx, dword ptr [esi+0x528]
        mov     dword ptr [esi+0x57c], ecx
        mov     edx, dword ptr [esi+0x524]
        mov     ecx, dword ptr [g_007dd230]
        mov     dword ptr [esi+0x578], edx
        mov     dl, byte ptr [ecx+0x29]
        mov     dword ptr [esi+0x574], eax
        mov     eax, dword ptr [esi+0x52c]
        mov     dword ptr [esi+0x580], eax
        mov     dword ptr [esi+0x2d0], ebx
        mov     dword ptr [esi+0x300], ebx
        mov     dword ptr [esi+0x2fc], ebx
        mov     dword ptr [esi+0x304], ebx
        mov     byte ptr [esi+0x4b1], dl
        call    FUN_00637ac0
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx+0x40]
        xor     edx, 0x85739531
        lea     eax, [ecx+0x40]
        mov     dword ptr [esi+0x58c], ebx
        mov     dword ptr [esi+0x384], ebx
        mov     dword ptr [esi+0x33c], 0xffffffff
        mov     dword ptr [esi+0x490], 0xffffffff
        mov     byte ptr [esi+0x5ac], bl
        jz      L_54A14D
        cmp     dword ptr [esi+0x55c], ebx
        jnz     L_54A14D
        mov     eax, dword ptr [eax]
        mov     ecx, dword ptr [ebp+0xc]
        mov     dx, word ptr [ecx+0x60]
        xor     eax, 0x85739531
        cmp     dx, word ptr [g_007db0ac]
        mov     dword ptr [eax+0x58], esi
        lea     eax, [ecx+0x60]
        jnz     L_549F44
        mov     cx, word ptr [eax+0x2]
        cmp     cx, word ptr [g_007db0ae]
        jz      L_549F59
L_549F44:
        push    1
        push    eax
        lea     ecx, [esp+0x14]
        call    FUN_004d1f80
        lea     ecx, [esp+0xc]
        call    FUN_004d21c0
L_549F59:
        mov     edx, dword ptr [g_007dab44]
        mov     ecx, dword ptr [g_007dab40]
        push    1
        lea     eax, [esi+0x2fc]
        push    eax
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax+0x8]
        push    0x77cd8c
        xor     ecx, 0x85739531
        call    FUN_004ecfb0
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        push    1
        lea     eax, [esi+0x300]
        push    eax
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx+0x8]
        push    0x77cd78
        xor     ecx, 0x85739531
        call    FUN_004ecfb0
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [g_007dab40]
        push    3
        xor     ecx, eax
        mov     ecx, dword ptr [ecx+0x8]
        push    edi
        push    0x77cd68
        xor     ecx, 0x85739531
        call    FUN_004ecfb0
        mov     edx, dword ptr [g_007dab44]
        mov     edi, dword ptr [g_007dab40]
        push    4
        lea     eax, [esi+0x524]
        push    eax
        mov     eax, dword ptr [edx]
        xor     eax, edi
        mov     ecx, dword ptr [eax+0x8]
        push    0x77cd58
        xor     ecx, 0x85739531
        call    FUN_004ecfb0
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [g_007dab40]
        push    1
        xor     edx, eax
        mov     ecx, dword ptr [edx+0x8]
        lea     edi, [esi+0x624]
        push    edi
        push    0x77cd44
        xor     ecx, 0x85739531
        call    FUN_004ecfb0
        push    1
        lea     eax, [esi+0x628]
        push    eax
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [ecx+0x8]
        push    0x77cd30
        xor     ecx, 0x85739531
        call    FUN_004ecfb0
        mov     edx, dword ptr [g_007dab44]
        mov     ecx, dword ptr [g_007dab40]
        mov     eax, dword ptr [edx]
        push    1
        xor     eax, ecx
        mov     ecx, dword ptr [eax+0x8]
        push    edi
        push    0x77cd1c
        xor     ecx, 0x85739531
        call    FUN_004ecfb0
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        push    1
        lea     eax, [esi+0x628]
        push    eax
        push    0x77cd08
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx+0x8]
        xor     ecx, 0x85739531
        call    FUN_004ecfb0
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        mov     edi, dword ptr [g_007dab40]
        push    3
        lea     eax, [esi+0x534]
        xor     edx, edi
        mov     ecx, dword ptr [edx+0x8]
        push    eax
        push    0x77ccf4
        xor     ecx, 0x85739531
        call    FUN_004ecfb0
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [g_007dab40]
        push    ebx
        xor     edx, ecx
        mov     ecx, dword ptr [edx+0x8]
        lea     eax, [esi+0x540]
        push    eax
        push    0x77cce4
        xor     ecx, 0x85739531
        call    FUN_004ecfb0
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        push    ebx
        lea     eax, [esi+0x544]
        push    eax
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx+0x8]
        push    0x77ccd4
        xor     ecx, 0x85739531
        call    FUN_004ecfb0
        mov     edx, dword ptr [g_007dab40]
        push    ebx
        lea     eax, [esi+0x490]
        push    eax
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     ecx, dword ptr [ecx+0x8]
        push    0x77ccbc
        xor     ecx, 0x85739531
        call    FUN_004ecfb0
L_54A14D:
        xor     eax, eax
        mov     dword ptr [esi+0x938], ebx
        lea     edi, [esi+0x93c]
        mov     ecx, 6
        rep     stosd
        mov     ecx, esi
        mov     dword ptr [esi+0x6b0], ebx
        mov     dword ptr [esi+0x6b4], ebx
        mov     dword ptr [esi+0x6b8], ebx
        mov     byte ptr [esi+0x588], bl
        mov     byte ptr [esi+0x584], bl
        mov     byte ptr [esi+0x586], bl
        mov     byte ptr [esi+0x589], bl
        mov     dword ptr [esi+0x530], 0xc0000000
        call    FUN_00558800
        push    0xb
        push    esi
        call    FUN_004c8eb0
        mov     edx, dword ptr [esi+0x78]
        lea     ecx, [esi+0x78]
        add     esp, 8
        mov     dword ptr [esi+0x4b8], ebx
        mov     dword ptr [esi+0x4bc], ebx
        mov     dword ptr [esi+0x4c0], ebx
        mov     dword ptr [esi+0x4c4], ebx
        mov     dword ptr [esi+0x4c8], ebx
        mov     dword ptr [esi+0x4cc], ebx
        mov     dword ptr [esi+0x4d0], ebx
        mov     dword ptr [esi+0x4d4], ebx
        mov     dword ptr [esi+0x4d8], ebx
        mov     dword ptr [esi+0x4dc], ebx
        mov     dword ptr [esi+0x4e0], ebx
        call    dword ptr [edx+0x4]
        add     eax, 0x1c
        push    eax
        mov     ecx, esi
        call    FUN_0054a300
        mov     eax, dword ptr [g_007b8d88]
        mov     ecx, dword ptr [g_007b8d8c]
        mov     edx, dword ptr [g_007b8d90]
        mov     dword ptr [esi+0x64c], ebx
        mov     dword ptr [esi+0x654], ebx
        mov     dword ptr [esi+0x674], eax
        pop     edi
        mov     dword ptr [esi+0x324], ebx
        mov     dword ptr [esi+0x328], ebx
        mov     dword ptr [esi+0x334], ebx
        mov     byte ptr [esi+0x32d], bl
        mov     byte ptr [esi+0x32e], bl
        mov     byte ptr [esi+0x32f], bl
        mov     dword ptr [esi+0x650], ebx
        mov     dword ptr [esi+0x658], ebx
        mov     byte ptr [esi+0x4b0], bl
        mov     dword ptr [esi+0x368], 3
        mov     dword ptr [esi+0x678], ecx
        mov     dword ptr [esi+0x67c], edx
        mov     byte ptr [esi+0x330], 1
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
    }
}
