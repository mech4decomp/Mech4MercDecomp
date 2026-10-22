/*
 * FUN_005d2312 (extent 0x5d2312-0x5d23d0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern char   g_007b551c;

__declspec(naked) void FUN_005d2312(void)
{
    __asm {
        mov    edi, edi
        jg    L_2333
        pop    ebp
        add    byte ptr [edi + 0x1d], bh
        pop    ebp
        add    byte ptr [edi + 0x1d], bh
        pop    ebp
        add    byte ptr [edi + 0x1d], bh
        pop    ebp
        add    byte ptr [edi + 0x1d], bh
        pop    ebp
        add    byte ptr [edi + 0x1d], bh
        pop    ebp
        add    byte ptr [edi + 0x1d], bh
        pop    ebp
        add    byte ptr [edi + 0x1d], bh
        pop    ebp
L_2333:
        add    byte ptr [edi + 0x1d], bh
        pop    ebp
        add    byte ptr [eax - 0x6f6f6f70], dl
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    dword ptr [ecx + 0x3b8], eax
        ret    4
        nop    
        nop    
        nop    
        mov    al, byte ptr [g_007b551c]
        test    al, al
        push    esi
        jne    L_2360
        xor    al, al
        pop    esi
        ret    8
L_2360:
        fld    dword ptr [ecx + 0x3b8]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_2379
        xor    al, al
        pop    esi
        ret    8
L_2379:
        mov    eax, dword ptr [ecx + 0x368]
        test    eax, eax
        jne    L_2389
        xor    al, al
        pop    esi
        ret    8
L_2389:
        mov    dl, byte ptr [eax + 0x3c]
        test    dl, dl
        jne    L_2396
L_2390:
        xor    al, al
        pop    esi
        ret    8
L_2396:
        mov    edx, dword ptr [eax + 0x60]
        mov    eax, dword ptr [eax + 0x54]
        xor    esi, esi
L_239e:
        cmp    edx, eax
        je    L_23b1
        test    byte ptr [edx + 0xc], 1
        jne    L_2390
        inc    esi
        add    edx, 0x18
        cmp    esi, 2
        jl    L_239e
L_23b1:
        mov    eax, dword ptr [ecx]
        push    1
        lea    edx, [ecx + 0x36c]
        push    edx
        mov    edx, dword ptr [esp + 0x14]
        push    edx
        mov    edx, dword ptr [esp + 0x14]
        push    edx
        call    dword ptr [eax + 0x160]
        pop    esi
        ret    8
    }
}
