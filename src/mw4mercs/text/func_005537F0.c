/*
 * FUN_005537f0 (964 B) — Complex initialization/update function.
 *
 * Initializes 6 slots at this+0x904..0x92c, allocates/frees memory,
 * iterates through objects, processes flags at this+0x1a0,
 * and calls various helper functions.
 *
 * __thiscall (ECX = this)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00553650(void *param);
extern void __stdcall FUN_004084e0(int param);
extern int __stdcall FUN_004084d0(int size);
extern int __stdcall FUN_0040c0e0(int param);
extern int __stdcall FUN_00415230(int param1, int param2);
extern int __stdcall FUN_0052b230(int param);
extern int __stdcall FUN_00416cc0(void);
extern void __stdcall FUN_004d1f10(void *param);
extern void __stdcall FUN_004da8d0(void *param1, void *param2);
extern void __stdcall FUN_0040f060(void *param);
extern void __stdcall FUN_00412740(void *param);
extern void __stdcall FUN_0040d9b0(void *param);
extern void __stdcall FUN_004d21c0(void *param);
extern void __stdcall FUN_0041fcb0(void);
extern void __stdcall FUN_0041fcd0(int param);
extern int __stdcall FUN_0041fd80(void);
extern void __stdcall FUN_005bfa50(int param1, int param2, int param3, int param4, int param5);
extern void __stdcall FUN_005bf9a0(int param);
extern void __stdcall FUN_004179b0(int param);
extern void __stdcall FUN_00553bc0(int param);
extern void __stdcall FUN_00629290(int param);
extern void __stdcall FUN_0063c4d0(int param);
extern void __stdcall FUN_0063d510(int param1, int param2);

__declspec(naked) void __stdcall FUN_005537f0(void)
{
    

extern int DAT_007f20ac;
extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
sub     esp, 0x64
        push    ebp
        mov     ebp, ecx
        lea     eax, [ebp + 0x904]
        push    esi
        push    eax
        call    FUN_00553650
        lea     eax, [ebp + 0x90c]
        push    eax
        call    FUN_00553650
        lea     eax, [ebp + 0x914]
        push    eax
        call    FUN_00553650
        lea     eax, [ebp + 0x91c]
        push    eax
        call    FUN_00553650
        lea     eax, [ebp + 0x924]
        push    eax
        call    FUN_00553650
        lea     eax, [ebp + 0x92c]
        push    eax
        call    FUN_00553650
        mov     eax, dword ptr [ebp + 0x938]
        add     esp, 0x18
        test    eax, eax
        jz      label_0x553855
        push    eax
        call    FUN_004084e0
        add     esp, 0x04

label_0x553855:
        push    0x0c
        call    FUN_004084d0
        add     esp, 0x04
        test    eax, eax
        jz      label_0x55387f
        mov     ecx, dword ptr [ebp + 0x384]
        add     ecx, 0x3f8
        mov     dword ptr [eax + 0x04], ecx
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [eax + 0x08], ecx
        mov     dword ptr [eax], 0x0077d13c
        jmp     label_0x553881

label_0x55387f:
        xor     eax, eax

label_0x553881:
        push    ebx
        push    edi
        mov     ecx, eax
        mov     dword ptr [ebp + 0x938], eax
        call    FUN_0040c0e0
        mov     esi, eax
        test    esi, esi
        jz      label_0x553af2

label_0x55389a:
        mov eax, dword ptr [DAT_007f20ac]
        mov     ecx, dword ptr [esi + 0x04]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      label_0x5538b2
        mov     dword ptr [ebp + 0x304], esi

label_0x5538b2:
        mov edx, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        xor     ebx, ebx
        mov     dword ptr [esp + 0x2c], 0x3f800000
        mov     dword ptr [esp + 0x28], 0x00000000
        mov     dword ptr [esp + 0x20], 0x00000000
        mov     dword ptr [esp + 0x24], 0x3f800000
        mov     dword ptr [esp + 0x10], ebx
        mov     edi, dword ptr [edx]
        push    0x14
        xor     edi, ecx
        call    FUN_004084d0
        add     esp, 0x04
        cmp     eax, ebx
        jz      label_0x553912
        mov     ecx, dword ptr [edi + 0x0c]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx + 0x8c]
        add     edx, 0x10
        push    edx
        mov     ecx, eax
        call    FUN_0052b230
        mov     ebx, eax

label_0x553912:
        mov     ecx, ebx
        call    FUN_00416cc0
        mov     edi, eax
        test    edi, edi
        jz      label_0x5539ab

label_0x553923:
        lea     ecx, [esp + 0x30]
        call    FUN_004d1f10
        mov     ax, word ptr [edi + 0x10]
        mov     cx, word ptr [edi + 0x12]
        lea     edx, [esp + 0x14]
        mov     word ptr [esp + 0x14], ax
        push    edx
        lea     eax, [esp + 0x34]
        push    eax
        mov     word ptr [esp + 0x1e], cx
        call    FUN_004da8d0
        mov     ecx, dword ptr [esp + 0x4c]
        mov     edx, dword ptr [esi + 0x78]
        mov     dword ptr [esp + 0x24], ecx
        lea     ecx, [esi + 0x78]
        add     esp, 0x08
        call    dword ptr [edx + 0x04]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [ecx + 0x30]
        cmp     edx, dword ptr [eax + 0x30]
        jnz     label_0x553991
        add     edi, 0x18
        push    edi
        lea     ecx, [esp + 0x1c]
        call    FUN_0040f060
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        lea     ecx, [esp + 0x18]
        call    FUN_0040d9b0

label_0x553991:
        lea     ecx, [esp + 0x30]
        call    FUN_004d21c0
        mov     ecx, ebx
        call    FUN_00416cc0
        mov     edi, eax
        test    edi, edi
        jnz     label_0x553923

label_0x5539ab:
        test    ebx, ebx
        jz      label_0x5539b7
        mov     edx, dword ptr [ebx]
        push    0x01
        mov     ecx, ebx
        call    dword ptr [edx]

label_0x5539b7:
        mov eax, dword ptr [DAT_007dab44]
        mov edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0x40]
        xor     edx, 0x85739531
        jz      label_0x553a28
        lea     edi, [esi + 0x1a4]
        mov     ecx, edi
        call    FUN_0041fcb0
        mov eax, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        push    esi
        lea     ecx, [esi + 0x1ac]
        push    ecx
        mov     ecx, dword ptr [esp + 0x18]
        lea     edx, [esp + 0x28]
        push    edx
        mov     edx, dword ptr [eax + 0x40]
        push    0x00
        xor     edx, 0x85739531
        push    ecx
        mov     ecx, dword ptr [edx + 0x4c]
        call    FUN_005bfa50
        push    eax
        mov     ecx, edi
        call    FUN_0041fcd0
        mov     ecx, edi
        call    FUN_0041fd80
        mov     ecx, eax
        call    FUN_005bf9a0

label_0x553a28:
        test    byte ptr [esi + 0x1a0], 0x01
        mov     dword ptr [esi + 0x17c], ebp
        jz      label_0x553a43
        push    esi
        lea     ecx, [ebp + 0x904]
        call    FUN_004179b0

label_0x553a43:
        mov     eax, dword ptr [esi + 0x1a0]
        shr     eax, 0x01
        test    al, 0x01
        jz      label_0x553a5b
        push    esi
        lea     ecx, [ebp + 0x90c]
        call    FUN_004179b0

label_0x553a5b:
        mov     ecx, dword ptr [esi + 0x1a0]
        shr     ecx, 0x02
        test    cl, 0x01
        jz      label_0x553a75
        push    esi
        lea     ecx, [ebp + 0x914]
        call    FUN_004179b0

label_0x553a75:
        mov     edx, dword ptr [esi + 0x1a0]
        shr     edx, 0x03
        test    dl, 0x01
        jz      label_0x553a8f
        push    esi
        lea     ecx, [ebp + 0x91c]
        call    FUN_004179b0

label_0x553a8f:
        mov     eax, dword ptr [esi + 0x1a0]
        shr     eax, 0x04
        test    al, 0x01
        jz      label_0x553aa8
        push    esi
        lea     ecx, [ebp + 0x924]
        call    FUN_004179b0

label_0x553aa8:
        mov     ecx, dword ptr [esi + 0x1a0]
        shr     ecx, 0x05
        test    cl, 0x01
        jz      label_0x553ac2
        push    esi
        lea     ecx, [ebp + 0x92c]
        call    FUN_004179b0

label_0x553ac2:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      label_0x553add
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     label_0x553add
        push    eax
        call    FUN_004084e0
        add     esp, 0x04

label_0x553add:
        mov     ecx, dword ptr [ebp + 0x938]
        call    FUN_0040c0e0
        mov     esi, eax
        test    esi, esi
        jnz     label_0x55389a

label_0x553af2:
        mov     eax, dword ptr [ebp + 0x938]
        mov     edx, dword ptr [eax + 0x04]
        mov     ecx, dword ptr [edx]
        mov     dword ptr [eax + 0x08], ecx
        push    0x01
        mov     ecx, ebp
        call    FUN_00553bc0
        mov     dword ptr [ebp + 0x8e0], 0x00000001
        lea     esi, [ebp + 0x93c]
        lea     edi, [ebp + 0x904]
        mov     ebx, 0x06

label_0x553b24:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      label_0x553b33
        push    eax
        call    FUN_004084e0
        add     esp, 0x04

label_0x553b33:
        push    0x0c
        call    FUN_004084d0
        add     esp, 0x04
        test    eax, eax
        jz      label_0x553b51
        mov     edx, dword ptr [edi]
        mov     dword ptr [eax + 0x04], edi
        mov     dword ptr [eax + 0x08], edx
        mov     dword ptr [eax], 0x0077d13c
        jmp     label_0x553b53

label_0x553b51:
        xor     eax, eax

label_0x553b53:
        mov     ecx, dword ptr [eax + 0x04]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [esi], eax
        mov     dword ptr [esi - 0x58], 0x00000001
        add     esi, 0x04
        add     edi, 0x08
        dec     ebx
        mov     dword ptr [eax + 0x08], edx
        jnz     label_0x553b24
        mov eax, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [eax]
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x40]
        xor     ecx, 0x85739531
        pop     edi
        pop     ebx
        jz      label_0x553bae
        mov     ecx, dword ptr [eax + 0x40]
        push    0x0a
        xor     ecx, 0x85739531
        call    FUN_00629290
        mov     esi, eax
        mov     ecx, esi
        call    FUN_0063c4d0
        mov     edx, dword ptr [ebp + 0x8e0]
        push    edx
        mov     ecx, esi
        call    FUN_0063d510

label_0x553bae:
        pop     esi
        pop     ebp
        add     esp, 0x64
        ret
    }


}
