/*
 * FUN_00502e2b (extent 0x502e2b-0x502ee7) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2ac;
extern char   g_1300502e;

__declspec(naked) void FUN_00502e2b(void)
{
    __asm {
        /* __emit: alignment pad 90 (nop) */
        __emit 0x90
        /* __emit: in-function jump-table DATA (6 dword entries, relocated
           addresses of a prior function at ~0x502E01). Inline asm has no `dd`;
           emit the literal patched address bytes (one byte per __emit). */
        __emit 0x01
        __emit 0x2E
        __emit 0x50
        __emit 0x00
        __emit 0x07
        __emit 0x2E
        __emit 0x50
        __emit 0x00
        __emit 0x0D
        __emit 0x2E
        __emit 0x50
        __emit 0x00
        __emit 0x13
        __emit 0x2E
        __emit 0x50
        __emit 0x00
        __emit 0x19
        __emit 0x2E
        __emit 0x50
        __emit 0x00
        __emit 0x1F
        __emit 0x2E
        __emit 0x50
        __emit 0x00
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
        push    esi
        mov    esi, dword ptr [esp + 8]
        push    edi
        mov    edi, dword ptr [g_0076b2ac]
        push    0x7765c8
        push    esi
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_2e73
        pop    edi
        mov    eax, 1
        pop    esi
        ret    
L_2e73:
        push    0x7765c0
        push    esi
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_2e8a
        pop    edi
        mov    eax, 2
        pop    esi
        ret    
L_2e8a:
        push    0x7765b8
        push    esi
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_2ea1
        pop    edi
        mov    eax, 3
        pop    esi
        ret    
L_2ea1:
        push    0x7765b0
        push    esi
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_2eb8
        pop    edi
        mov    eax, 4
        pop    esi
        ret    
L_2eb8:
        push    0x7765a8
        push    esi
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_2ecf
        pop    edi
        mov    eax, 5
        pop    esi
        ret    
L_2ecf:
        push    0x7765a0
        push    esi
        call    edi
        add    esp, 8
        neg    eax
        sbb    eax, eax
        and    eax, 0xfffffffa
        pop    edi
        add    eax, 6
        pop    esi
        ret    
    }
}
