/*
 * FUN_006ac15c (extent 0x6ac15c-0x6ac2b4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00698b90(void);

__declspec(naked) void FUN_006ac15c(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    0x2c
        mov    esi, ecx
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_c17e
        mov    ecx, dword ptr [esi + 0x3c]
        push    ecx
        mov    ecx, eax
        call    FUN_00698b90
        jmp    L_c180
L_c17e:
        xor    eax, eax
L_c180:
        mov    dword ptr [esi + 0x50], eax
        mov    al, byte ptr [esp + 8]
        test    al, al
        jne    L_c214
        push    0x2c
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_c1aa
        mov    edx, dword ptr [esi + 0x38]
        push    edx
        mov    ecx, eax
        call    FUN_00698b90
        jmp    L_c1ac
L_c1aa:
        xor    eax, eax
L_c1ac:
        push    0x2c
        mov    dword ptr [esi + 0x4c], eax
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_c1ca
        mov    ecx, dword ptr [esi + 0x40]
        push    ecx
        mov    ecx, eax
        call    FUN_00698b90
        jmp    L_c1cc
L_c1ca:
        xor    eax, eax
L_c1cc:
        push    0x2c
        mov    dword ptr [esi + 0x54], eax
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_c1ea
        mov    edx, dword ptr [esi + 0x44]
        push    edx
        mov    ecx, eax
        call    FUN_00698b90
        jmp    L_c1ec
L_c1ea:
        xor    eax, eax
L_c1ec:
        push    0x2c
        mov    dword ptr [esi + 0x58], eax
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_c20f
        mov    ecx, dword ptr [esi + 0x48]
        push    ecx
        mov    ecx, eax
        call    FUN_00698b90
        mov    dword ptr [esi + 0x5c], eax
        pop    esi
        ret    4
L_c20f:
        xor    eax, eax
        mov    dword ptr [esi + 0x5c], eax
L_c214:
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esi + 0x50]
        push    edi
        xor    edi, edi
        cmp    ecx, edi
        je    L_c233
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_c233:
        mov    ecx, dword ptr [esi + 0x4c]
        cmp    ecx, edi
        mov    dword ptr [esi + 0x50], edi
        je    L_c276
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
        mov    ecx, dword ptr [esi + 0x54]
        cmp    ecx, edi
        mov    dword ptr [esi + 0x4c], edi
        je    L_c253
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_c253:
        mov    ecx, dword ptr [esi + 0x58]
        cmp    ecx, edi
        mov    dword ptr [esi + 0x54], edi
        je    L_c263
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
L_c263:
        mov    ecx, dword ptr [esi + 0x5c]
        cmp    ecx, edi
        mov    dword ptr [esi + 0x58], edi
        je    L_c273
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_c273:
        mov    dword ptr [esi + 0x5c], edi
L_c276:
        pop    edi
        mov    dword ptr [esi + 0x20], 0xbf800000
        pop    esi
        ret    
        fld    dword ptr [ecx + 0x10]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_c294
        fld    dword ptr [ecx + 0x28]
        ret    
L_c294:
        fld    dword ptr [ecx + 0x20]
        fdiv    dword ptr [ecx + 0x10]
        fmul    dword ptr [ecx + 0x2c]
        fadd    dword ptr [ecx + 0x28]
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [ecx + 0x10]
        ret    
    }
}
