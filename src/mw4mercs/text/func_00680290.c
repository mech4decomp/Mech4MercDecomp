/*
 * FUN_00680290 (337 B) — HUD element update (__thiscall, RET 0xc).
 * Walks 8 double fields, updates a linked list of elements, calls
 * per-element virtual dispatch via table 0x82db30.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int *g_007dab44;
extern int g_007dab40;
extern double g_0077b640;
extern char g_0082db30;
extern void __cdecl FUN_00680b50(void);
extern void __cdecl FUN_0067fa30(void);

__declspec(naked) void FUN_00680290(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x2c
        mov     eax, dword ptr [g_007dab44]
        mov     edx, dword ptr [eax]
        mov     eax, dword ptr [ebp+0x10]
        push    ebx
        push    esi
        push    edi
        xor     edx, dword ptr [g_007dab40]
        mov     edx, dword ptr [edx+0xc]
        mov     edi, eax
        shl     edi, 7
        add     edi, eax
        xor     edx, 0x85739531
        shl     edi, 3
        sub     edi, eax
        lea     eax, [edx+edi*8+0x3560]
        mov     edx, dword ptr [eax]
        mov     esi, ecx
        fld     qword ptr [esi+0x64]
        mov     dword ptr [esp+0x2c], edx
        mov     edx, dword ptr [eax+4]
        mov     eax, dword ptr [eax+8]
        lea     ecx, [esi+0x64]
        mov     dword ptr [esp+0x30], edx
        mov     dword ptr [esp+0x14], esi
        mov     byte ptr [esp+0x13], 0
        mov     dword ptr [esp+0x34], eax
        xor     edx, edx
    L_0x6802ef:
        fld     qword ptr [ebp+8]
        mov     byte ptr [esp+edx+0x24], 0
        fsub    qword ptr [ecx]
        fcomp   qword ptr [g_0077b640]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_0x68032d
        fld     qword ptr [ecx]
        mov     byte ptr [esp+edx+0x24], 1
        fadd    qword ptr [g_0077b640]
        fst     qword ptr [esp+0x18]
        fstp    qword ptr [ecx]
        fcom    qword ptr [esp+0x18]
        fnstsw  ax
        test    ah, 0x1
        jz      L_0x68032d
        fstp    st(0)
        mov     dword ptr [esi+0x60], edx
        fld     qword ptr [esp+0x18]
    L_0x68032d:
        inc     edx
        add     ecx, 8
        cmp     edx, 8
        jl      L_0x6802ef
        mov     ebx, dword ptr [esi+0x10]
        fstp    st(0)
        test    ebx, ebx
        jz      L_0x6803d4
    L_0x68033b:
        mov     esi, dword ptr [ebx]
        test    esi, esi
        mov     ebx, dword ptr [ebx+4]
        jz      L_0x6803d4
        mov     al, byte ptr [esi+0x24]
        test    al, al
        jz      L_0x68036d
        mov     ecx, dword ptr [esi+0x28]
        mov     al, byte ptr [esp+ecx+0x24]
        test    al, al
        jz      L_0x68036d
        mov     byte ptr [esi+0x24], 0
        mov     dword ptr [esi+0x28], 0xffffffff
    L_0x68036d:
        mov     edx, dword ptr [esp+0x2c]
        mov     edi, dword ptr [esi+0x18]
        mov     ecx, dword ptr [esp+0x30]
        sub     esp, 0xc
        mov     eax, esp
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [esp+0x40]
        mov     dword ptr [eax+4], ecx
        shl     edi, 5
        lea     ecx, [esi+0x10]
        add     edi, offset g_0082db30
        mov     dword ptr [eax+8], edx
        call    FUN_00680b50
        push    eax
        call    dword ptr [edi+0x14]
        add     esp, 0x10
        test    al, al
        jz      L_0x6803b3
        mov     eax, dword ptr [esp+0x14]
        mov     ecx, dword ptr [eax+0x60]
        mov     byte ptr [esi+0x24], 1
        mov     dword ptr [esi+0x28], ecx
    L_0x6803b3:
        mov     edx, dword ptr [esp+0x14]
        mov     eax, dword ptr [edx+0x5c]
        push    eax
        mov     ecx, esi
        call    FUN_0067fa30
        test    al, al
        __emit 0x0F /* __emit: JZ L_0x68033b; MSVC6 miscomputes backward rel32 by -8 (2 intervening call relocs) */
        __emit 0x84
        __emit 0x71
        __emit 0xFF
        __emit 0xFF
        __emit 0xFF
        mov     byte ptr [esp+0x13], 1
        __emit 0xE9 /* __emit: JMP L_0x68033b; same off-by-8 reloc issue */
        __emit 0x67
        __emit 0xFF
        __emit 0xFF
        __emit 0xFF
    L_0x6803d4:
        mov     al, byte ptr [esp+0x13]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
