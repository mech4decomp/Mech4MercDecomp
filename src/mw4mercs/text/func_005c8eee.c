/*
 * FUN_005c8eee (extent 0x5c8eee-0x5c8ff1) - gen via tools/gen_bigfunc.py.
 *
 * The first 46 bytes (0x5c8eee-0x5c8f1b) are in-function jump-table DATA, not
 * instructions. They are emitted verbatim with __emit (inline asm has no `dd`).
 * Then 8 nops, then the real code.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f1f84;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_005dbe50(void);
extern void __cdecl FUN_00637a20(void);
extern void __cdecl FUN_00637b40(void);
extern void __cdecl FUN_00683cc0(void);

__declspec(naked) void FUN_005c8eee(void)
{
    __asm {
        /* ---- in-function jump-table DATA (46 bytes, 0x5c8eee-0x5c8f1b) ---- */
        __emit 0x8B
        __emit 0xFF
        __emit 0x88
        __emit 0x8E
        __emit 0x5C
        __emit 0x00
        __emit 0x88
        __emit 0x8E
        __emit 0x5C
        __emit 0x00
        __emit 0x9B
        __emit 0x8E
        __emit 0x5C
        __emit 0x00
        __emit 0x9B
        __emit 0x8E
        __emit 0x5C
        __emit 0x00
        __emit 0xAE
        __emit 0x8E
        __emit 0x5C
        __emit 0x00
        __emit 0xAE
        __emit 0x8E
        __emit 0x5C
        __emit 0x00
        __emit 0xC1
        __emit 0x8E
        __emit 0x5C
        __emit 0x00
        __emit 0xC1
        __emit 0x8E
        __emit 0x5C
        __emit 0x00
        __emit 0xD4
        __emit 0x8E
        __emit 0x5C
        __emit 0x00
        __emit 0xD4
        __emit 0x8E
        __emit 0x5C
        __emit 0x00
        /* ---- 8 nops ---- */
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        /* ---- real code ---- */
        mov    eax, dword ptr [esp + 4]
        mov    dword ptr [ecx + 0x5d0], eax
        ret    4
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0xc]
        mov    eax, dword ptr [ecx]
        push    edi
        call    dword ptr [eax + 8]
        test    al, al
        mov    edi, dword ptr [esp + 0xc]
        je    L_8f5b
        lea    ecx, [esi + 0x1c8]
        call    FUN_0041fd80
        cmp    edi, eax
        je    L_8f5b
        pop    edi
        xor    al, al
        pop    esi
        ret    8
L_8f5b:
        mov    ecx, esi
        call    FUN_005dbe50
        mov    dword ptr [esp + 0x10], eax
        fild    dword ptr [esp + 0x10]
        push    0x4c
        fstp    dword ptr [esp + 0x14]
        call    FUN_00637b40
        mov    ecx, eax
        call    FUN_00637a20
        fcomp    dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        je    L_8fdf
        mov    ecx, esi
        call    FUN_005dbe50
        mov    dword ptr [esp + 0x10], eax
        fild    dword ptr [esp + 0x10]
        push    0x4d
        fstp    dword ptr [esp + 0x14]
        call    FUN_00637b40
        mov    ecx, eax
        call    FUN_00637a20
        fcomp    dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 1
        jne    L_8fdf
        mov    eax, dword ptr [g_007f1f84]
        mov    ecx, dword ptr [edi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_8fdf
        mov    ecx, dword ptr [esi + 0x170]
        push    ecx
        call    FUN_00683cc0
        add    esp, 4
        cmp    al, 1
        jne    L_8fdf
        pop    edi
        xor    al, al
        pop    esi
        ret    8
L_8fdf:
        pop    edi
        mov    al, 1
        pop    esi
        ret    8
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
        ret    
    }
}
