/* FUN_00584e50 - 940 bytes */

/* __stdcall, this in ecx */

extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00416b60(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_004da920(void);
extern void __cdecl FUN_004fc920(void);
extern void __cdecl FUN_00585200(void);
extern void __cdecl FUN_00523e60(void);
extern void __cdecl FUN_0041e690(void);
extern void __cdecl FUN_004cec10(void);
extern void __cdecl FUN_004d9910(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_0041e710(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0040d560(void);
extern void __cdecl FUN_004e2f40(void);
extern void __cdecl FUN_0040ca40(void);
extern void __cdecl FUN_0040c9e0(void);
extern void __cdecl FUN_005dbad0(void);
extern short DAT_007db0ac;
extern short DAT_007db0ae;
extern int DAT_007dab40;
extern int DAT_007dab44;
extern int DAT_007db090;
extern int DAT_007dc728;

__declspec(naked) void FUN_00584e50(void)
{
    __asm {
        sub     esp, 0x1C4
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     eax, [esi+0x78]
        lea     ecx, [esi+0x78]
        xor     ebx, ebx
        push    edi
        mov     [esi+0x52D], bl
        call    dword ptr [eax+4]
        push    0x782288
        lea     ecx, [esp+0x14]
        mov     ebp, eax
        call    FUN_00412570
        lea     ecx, [esp+0x10]
        lea     edi, [esi+0x28C]
        push    ecx
        mov     ecx, edi
        call    FUN_00416b60
        lea     ecx, [esp+0x10]
        mov     [esp+0x14], eax
        call    FUN_0040d9b0
        mov     edx, [esp+0x14]
        push    0x782274
        lea     ecx, [esp+0x14]
        mov     [esi+0x530], edx
        call    FUN_00412570
        lea     eax, [esp+0x10]
        push    eax
        mov     ecx, edi
        call    FUN_00416b60
        lea     ecx, [esp+0x10]
        mov     [esp+0x14], eax
        call    FUN_0040d9b0
        mov     ecx, [esp+0x14]
        mov     [esi+0x534], ecx
        push    0x782260
        lea     ecx, [esp+0x14]
        call    FUN_00412570
        lea     edx, [esp+0x10]
        push    edx
        mov     ecx, edi
        call    FUN_00416b60
        lea     ecx, [esp+0x10]
        mov     [esp+0x14], eax
        call    FUN_0040d9b0
        mov     eax, [esp+0x14]
        push    0x78224C
        lea     ecx, [esp+0x14]
        mov     [esi+0x538], eax
        call    FUN_00412570
        lea     ecx, [esp+0x10]
        push    ecx
        mov     ecx, edi
        call    FUN_00416b60
        lea     ecx, [esp+0x10]
        mov     [esp+0x14], eax
        call    FUN_0040d9b0
        mov     edx, [esp+0x14]
        push    0x782238
        lea     ecx, [esp+0x14]
        mov     [esi+0x53C], edx
        call    FUN_00412570
        lea     eax, [esp+0x10]
        push    eax
        mov     ecx, edi
        call    FUN_00416b60
        lea     ecx, [esp+0x10]
        mov     edi, eax
        call    FUN_0040d9b0
        mov     cx, [ebp+0x41C]
        add     ebp, 0x41C
        cmp     cx, word ptr [DAT_007db0ac]
        mov     [esi+0x540], edi
        jne     L_99c
        mov     dx, [ebp+0x2]
        cmp     dx, word ptr [DAT_007db0ae]
        je      L_50f8
    L_99c:
        cmp     [esi+0x99C], ebx
        jne     L_50f8
        cmp     [esi+0x530], ebx
        je      L_50f8
        push    ebp
        call    FUN_004da920
        mov     edi, dword ptr [DAT_007dab40]
        mov     [esp+0x1C], eax
        mov     eax, dword ptr [DAT_007dab44]
        mov     eax, [eax]
        add     esp, 0x4
        xor     eax, edi
        mov     ecx, [eax+0x10]
        push    ebx
        push    0x76B768
        xor     ecx, 0x85739531
        call    FUN_004fc920
        mov     edi, [esi+0xD8]
        mov     edx, [esi]
        mov     ecx, esi
        mov     [esp+0x14], eax
        add     edi, 0x80
        call    dword ptr [edx+0x60]
        push    0x7DB0AC
        push    0x7DB0AC
        mov     ecx, [esp+0x20]
        push    0x76B768
        push    0x8BD5E8
        push    0x8BD5E8
        push    eax
        mov     eax, [esp+0x2C]
        push    eax
        push    0x2
        push    ebx
        push    edi
        push    ebp
        push    ebx
        push    ecx
        push    ebx
        push    0x2
        push    0x134
        lea     ecx, [esp+0xE0]
        call    FUN_00585200
        mov     dx, word ptr [DAT_007db0ac]
        mov     ax, word ptr [DAT_007db0ae]
        push    0x7DB0AC
        lea     ecx, [esp+0x1C0]
        mov     [esp+0x1BC], dx
        mov     [esp+0x1BE], ax
        call    FUN_00523e60
        mov     ecx, [esp+0xA0]
        push    ebx
        push    ecx
        lea     edx, [esp+0xA8]
        push    edx
        lea     ecx, [esp+0x80]
        mov     byte ptr [esp+0x1CC], 0x5F
        mov     [esp+0x1D0], ebx
        mov     [esp+0x1D4], ebx
        mov     [esp+0x1D8], ebx
        mov     [esp+0x1DC], bl
        call    FUN_0041e690
        mov     ecx, dword ptr [DAT_007db090]
        call    FUN_004cec10
        mov     cl, [eax]
        mov     [esp+0x10], cl
        mov     dx, [eax+0x2]
        push    ebx
        lea     eax, [esp+0x14]
        push    eax
        lea     ecx, [esp+0x7C]
        push    ecx
        mov     [esp+0x1E], dx
        call    FUN_004d9910
        add     esp, 0xC
        mov     edi, eax
        push    edi
        lea     ecx, [esi+0x51C]
        call    FUN_0041fcd0
        mov     edx, dword ptr [DAT_007dab44]
        mov     eax, [edx]
        xor     eax, dword ptr [DAT_007dab40]
        mov     ecx, [eax+0x1C]
        xor     ecx, 0x85739531
        mov     edx, [ecx]
        push    edi
        call    dword ptr [edx+0x28]
        lea     ecx, [esp+0x74]
        call    FUN_0041e710
    L_50f8:
        mov     ecx, [esi+0xE0]
        mov     eax, [ecx]
        push    ebx
        push    0xF
        call    dword ptr [eax+4]
        mov     ecx, [esi+0xD8]
        add     ecx, 0x80
        push    ecx
        lea     ecx, [esp+0x2C]
        mov     dword ptr [esi+0x428], 0xF
        call    FUN_00419480
        push    0x7B8D08
        lea     ecx, [esp+0x44]
        mov     dword ptr [esp+0x20], 0xBF800000
        mov     dword ptr [esp+0x24], 0xBF800000
        mov     dword ptr [esp+0x28], 0xBF800000
        mov     dword ptr [esp+0x50], 0x447F0000
        call    FUN_0040d560
        mov     ecx, [esp+0x30]
        mov     edx, [esp+0x28]
        mov     eax, [esp+0x2C]
        mov     [esp+0x3C], ecx
        lea     ecx, [esp+0x50]
        mov     [esp+0x34], edx
        mov     [esp+0x38], eax
        lea     edx, [esp+0x34]
        lea     eax, [esp+0x94]
        push    ecx
        mov     ecx, dword ptr [DAT_007dc728]
        mov     [esp+0x54], edx
        mov     [esp+0x58], eax
        mov     [esp+0x5C], ebx
        mov     [esp+0x64], esi
        mov     dword ptr [esp+0x68], 0x1000
        call    FUN_004e2f40
        test    eax, eax
        je      no_draw
        fld     dword ptr [esp+0x4C]
        push    ecx
        lea     edx, [esp+0x44]
        fstp    dword ptr [esp]
        push    edx
        lea     ecx, [esp+0x70]
        call    FUN_0040ca40
        lea     eax, [esp+0x68]
        push    eax
        lea     ecx, [esp+0x38]
        push    ecx
        lea     ecx, [esp+0x24]
        call    FUN_0040c9e0
    no_draw:
        mov     edx, [esp+0x20]
        mov     eax, [esp+0x2C]
        mov     ecx, [esi+0x2FC]
        pop     edi
        mov     [esi+0x514], edx
        mov     [esi+0x518], eax
        pop     esi
        pop     ebp
        cmp     ecx, ebx
        pop     ebx
        je      done
        push    0x1
        call    FUN_005dbad0
    done:
        add     esp, 0x1C4
        ret
    }
}
