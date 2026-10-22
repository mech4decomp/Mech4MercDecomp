/*
 * FUN_00546c44 (extent 0x546c44-0x547074) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00538a50(void);
extern void __cdecl FUN_00538ae0(void);
extern void __cdecl FUN_00538f90(void);
extern void __cdecl FUN_005391a0(void);
extern void __cdecl FUN_005391d0(void);
extern void __cdecl FUN_00539210(void);
extern void __cdecl FUN_00539300(void);
extern void __cdecl FUN_00539370(void);
extern void __cdecl FUN_00539690(void);
extern void __cdecl FUN_0053a280(void);
extern void __cdecl FUN_0053a5d0(void);
extern void __cdecl FUN_0053a6c0(void);
extern void __cdecl FUN_0053ab70(void);
extern void __cdecl FUN_0053b120(void);
extern void __cdecl FUN_0053b1d0(void);
extern void __cdecl FUN_0053b480(void);
extern void __cdecl FUN_0053beb0(void);
extern void __cdecl FUN_0053c0f0(void);
extern void __cdecl FUN_0053c9f0(void);
extern void __cdecl FUN_0053cb90(void);
extern void __cdecl FUN_0053cbf0(void);
extern void __cdecl FUN_0053cd70(void);
extern void __cdecl FUN_0053d040(void);
extern void __cdecl FUN_0053d060(void);
extern void __cdecl FUN_0053d070(void);
extern void __cdecl FUN_0053d080(void);
extern void __cdecl FUN_0053d160(void);
extern void __cdecl FUN_0053dda0(void);
extern void __cdecl FUN_0053e180(void);
extern void __cdecl FUN_0053e290(void);
extern void __cdecl FUN_0053e7b0(void);
extern void __cdecl FUN_0053e8b0(void);
extern void __cdecl FUN_0053ec40(void);
extern void __cdecl FUN_0053efc0(void);
extern void __cdecl FUN_0053f140(void);
extern void __cdecl FUN_0053f210(void);
extern void __cdecl FUN_0053f910(void);
extern void __cdecl FUN_0053f9b0(void);
extern void __cdecl FUN_00542b00(void);
extern void __cdecl FUN_00542dc0(void);
extern void __cdecl FUN_00543150(void);
extern void __cdecl FUN_00543430(void);
extern void __cdecl FUN_00543ab0(void);
extern void __cdecl FUN_00543d60(void);
extern void __cdecl FUN_00544e90(void);
extern void __cdecl FUN_00544ea0(void);
extern void __cdecl FUN_00544f10(void);
extern void __cdecl FUN_00544f80(void);
extern void __cdecl FUN_00544fb0(void);
extern void __cdecl FUN_00545a10(void);
extern void __cdecl FUN_00546af0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_00546c44(void)
{
    __asm {
        jbe    L_6cb1
        push    esp
        add    byte ptr [ebx + ebp*2 + 0x6b920054], al
        push    esp
        add    byte ptr [eax - 0x51ffab95], ah
        imul    edx, dword ptr [eax + eax - 0x44], 0x6b
        push    esp
        add    byte ptr [eax + 0x55909090], dl
        mov    ebp, esp
        push    ebx
        mov    ebx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 8]
        push    ebx
        mov    esi, ecx
        push    edi
        call    FUN_00546af0
        test    al, al
        jne    L_706b
        lea    eax, [ebx - 0xa]
        cmp    eax, 0x32
        ja    L_7059
        jmp    dword ptr [eax*4 + 0x547074]
        mov    eax, dword ptr [ebp + 0x10]
        push    eax
        push    edi
        mov    ecx, esi
        call    FUN_0053f210
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    ecx, dword ptr [ebp + 0x10]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_0053f910
        pop    edi
        pop    esi
L_6cb1:
        pop    ebx
        pop    ebp
        ret    0xc
        mov    edx, dword ptr [ebp + 0x10]
        push    edx
        push    edi
        mov    ecx, esi
        call    FUN_0053f9b0
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    ecx, dword ptr [ebp + 0x10]
        mov    eax, dword ptr [esi]
        push    ecx
        push    edi
        mov    ecx, esi
        call    dword ptr [eax + 0x68]
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    edx, dword ptr [ebp + 0x10]
        push    edx
        push    edi
        mov    ecx, esi
        call    FUN_0053a6c0
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    eax, dword ptr [ebp + 0x10]
        push    eax
        push    edi
        mov    ecx, esi
        call    FUN_0053a280
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    ecx, dword ptr [ebp + 0x10]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_0053ab70
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    edx, dword ptr [ebp + 0x10]
        push    edx
        push    edi
        mov    ecx, esi
        call    FUN_0053b120
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    eax, dword ptr [ebp + 0x10]
        push    eax
        push    edi
        mov    ecx, esi
        call    FUN_0053b1d0
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    ecx, dword ptr [ebp + 0x10]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_0053b480
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    edx, dword ptr [ebp + 0x10]
        push    edx
        push    edi
        mov    ecx, esi
        call    FUN_0053beb0
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    eax, dword ptr [ebp + 0x10]
        push    eax
        push    edi
        mov    ecx, esi
        call    FUN_0053c9f0
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    ecx, dword ptr [ebp + 0x10]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_00538a50
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    edx, dword ptr [ebp + 0x10]
        push    edx
        push    edi
        mov    ecx, esi
        call    FUN_0053d160
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    eax, dword ptr [ebp + 0x10]
        push    eax
        push    edi
        mov    ecx, esi
        call    FUN_0053e8b0
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    ecx, dword ptr [ebp + 0x10]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_0053ec40
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    edx, dword ptr [ebp + 0x10]
        push    edx
        push    edi
        mov    ecx, esi
        call    FUN_00539690
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    eax, dword ptr [ebp + 0x10]
        push    eax
        push    edi
        mov    ecx, esi
        call    FUN_0053cb90
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    ecx, dword ptr [ebp + 0x10]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_0053cbf0
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    edx, dword ptr [ebp + 0x10]
        push    edx
        push    edi
        mov    ecx, esi
        call    FUN_0053d060
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    eax, dword ptr [ebp + 0x10]
        push    eax
        push    edi
        mov    ecx, esi
        call    FUN_0053d070
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    ecx, dword ptr [ebp + 0x10]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_0053cd70
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    edx, dword ptr [ebp + 0x10]
        push    edx
        push    edi
        mov    ecx, esi
        call    FUN_0053dda0
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    eax, dword ptr [ebp + 0x10]
        push    eax
        push    edi
        mov    ecx, esi
        call    FUN_0053e290
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    ecx, dword ptr [ebp + 0x10]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_0053e7b0
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    edx, dword ptr [ebp + 0x10]
        push    edx
        push    edi
        mov    ecx, esi
        call    FUN_0053f140
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    eax, dword ptr [ebp + 0x10]
        push    eax
        push    edi
        mov    ecx, esi
        call    FUN_00542b00
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    ecx, dword ptr [ebp + 0x10]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_00542dc0
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    edx, dword ptr [ebp + 0x10]
        push    edx
        push    edi
        mov    ecx, esi
        call    FUN_00543150
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    eax, dword ptr [ebp + 0x10]
        push    eax
        push    edi
        mov    ecx, esi
        call    FUN_0053a5d0
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    ecx, dword ptr [ebp + 0x10]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_00543d60
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    edx, dword ptr [ebp + 0x10]
        push    edx
        push    edi
        mov    ecx, esi
        call    FUN_00543430
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    eax, dword ptr [ebp + 0x10]
        push    eax
        push    edi
        mov    ecx, esi
        call    FUN_00538ae0
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    ecx, dword ptr [ebp + 0x10]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_00538f90
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    edx, dword ptr [ebp + 0x10]
        push    edx
        push    edi
        mov    ecx, esi
        call    FUN_00544f10
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    eax, dword ptr [ebp + 0x10]
        push    eax
        push    edi
        mov    ecx, esi
        call    FUN_00544f80
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    ecx, dword ptr [ebp + 0x10]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_00544fb0
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    edx, dword ptr [ebp + 0x10]
        push    edx
        push    edi
        mov    ecx, esi
        call    FUN_00544e90
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    eax, dword ptr [ebp + 0x10]
        push    eax
        push    edi
        mov    ecx, esi
        call    FUN_00544ea0
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    ecx, dword ptr [ebp + 0x10]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_00543ab0
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    edx, dword ptr [ebp + 0x10]
        push    edx
        push    edi
        mov    ecx, esi
        call    FUN_0053efc0
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    eax, dword ptr [ebp + 0x10]
        push    eax
        push    edi
        mov    ecx, esi
        call    FUN_0053c0f0
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    ecx, dword ptr [ebp + 0x10]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_0053d040
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    edx, dword ptr [ebp + 0x10]
        push    edx
        push    edi
        mov    ecx, esi
        call    FUN_005391a0
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    eax, dword ptr [ebp + 0x10]
        push    eax
        push    edi
        mov    ecx, esi
        call    FUN_005391d0
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    ecx, dword ptr [ebp + 0x10]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_00539210
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    edx, dword ptr [ebp + 0x10]
        push    edx
        push    edi
        mov    ecx, esi
        call    FUN_00539300
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    eax, dword ptr [ebp + 0x10]
        push    eax
        push    edi
        mov    ecx, esi
        call    FUN_00539370
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    ecx, dword ptr [ebp + 0x10]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_0053d080
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    edx, dword ptr [ebp + 0x10]
        push    edx
        push    edi
        mov    ecx, esi
        call    FUN_00545a10
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    eax, dword ptr [ebp + 0x10]
        push    eax
        push    edi
        mov    ecx, esi
        call    FUN_0053e180
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
L_7059:
        push    0x77b8b8
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_706b
        int 3    
L_706b:
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
        mov    edi, edi
        // jump-table data @ 0x00547074 (0 relocated pointers)
        // jump-table data @ 0x00547180 (0 relocated pointers)
    }
}
