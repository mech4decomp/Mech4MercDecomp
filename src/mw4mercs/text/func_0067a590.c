/*
 * FUN_0067A590 (167 B) — Conditional update of a transform.
 *
 * __fastcall (ECX = this), RET. If *(this+0xc)==1 and FUN_0067a7c0()
 * returns 1 and FUN_0067a540() is non-NULL and a chained pointer
 * deref (with XOR obfuscation) is non-NULL, copies a 12-byte block
 * from FUN_0067a500()+0x518, then a float from FUN_0067a540()+0xd8,
 * and calls FUN_0067a500(5,&local) + FUN_00557f60.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int  g_007dab44;
extern unsigned int  g_007dab40;
extern void __cdecl  FUN_0067a7c0(void);
extern void __cdecl  FUN_0067a540(void);
extern void __cdecl  FUN_0067a500(void);
extern void __cdecl  FUN_00557f60(void);

__declspec(naked) void __fastcall FUN_0067a590(void)
{
    __asm {
        mov     al, byte ptr [ecx + 0xc]
        sub     esp, 0x18
        cmp     al, 1
        jnz     l_end
        call    FUN_0067a7c0
        cmp     al, 1
        jnz     l_end
        call    FUN_0067a540
        test    eax, eax
        jz      l_end
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx + 0xc]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x50]
        mov     ecx, dword ptr [eax + 0x5c]
        test    ecx, ecx
        jz      l_end
        call    FUN_0067a500
        mov     ecx, dword ptr [eax + 0x518]
        add     eax, 0x518
        /* __emit: MSVC6 drops the 00 disp byte for [esp+0] (89 0C 24 vs ref 89 4C 24 00) */
        __emit 0x89
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        mov     edx, dword ptr [eax + 4]
        mov     dword ptr [esp + 4], edx
        mov     eax, dword ptr [eax + 8]
        mov     dword ptr [esp + 8], eax
        call    FUN_0067a540
        mov     eax, dword ptr [eax + 0xd8]
        mov     ecx, dword ptr [eax + 0xac]
        fld     dword ptr [eax + 0x8c]
        add     eax, 0x80
        /* __emit: MSVC6 drops the 00 disp byte for fstp [esp+0] (D9 1C 24 vs ref D9 5C 24 00) */
        __emit 0xD9
        __emit 0x5C
        __emit 0x24
        __emit 0x00
        /* __emit: MSVC6 drops the 00 disp byte for lea eax,[esp+0] (8D 04 24 vs ref 8D 44 24 00) */
        __emit 0x8D
        __emit 0x44
        __emit 0x24
        __emit 0x00
        push    eax
        mov     edx, ecx
        push    5
        mov     dword ptr [esp + 0x1c], ecx
        mov     dword ptr [esp + 0x10], edx
        call    FUN_0067a500
        mov     ecx, eax
        call    FUN_00557f60
    l_end:
        add     esp, 0x18
        ret
    }
}
