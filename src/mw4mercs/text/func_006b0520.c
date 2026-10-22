/*
 * FUN_006b0520 (228 B) — __thiscall (ECX = this), RET 0x4 (1 arg).
 *
 * ABL record handler. Reads/writes fields via a stream object (ESI, arg)
 * using virtual calls at vtable+0x20 (read/write of size+ptr). Frees an
 * existing object at this+0x14 (FUN_005d9500 + operator delete), and if a
 * flag byte is set, allocates a new 0x2c-byte object (FUN_005d93b0) and
 * stores it at this+0x14, then writes this+0x18..0x1c fields through the
 * stream.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  DAT_007f2464;
extern int  DAT_007f2440;
extern void __cdecl FUN_005d9500(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005d93b0(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void __fastcall func_006b0520(int thisptr)
{
    __asm {
        sub     esp, 0x8
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        push    0x4
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ebx, dword ptr [edi + 0x14]
        test    ebx, ebx
        jz      L_056d
        mov     ecx, ebx
        call    FUN_005d9500
        push    ebx
        call    FUN_004084e0
        add     esp, 0x4
L_056d:
        mov     al, byte ptr [esp + 0x18]
        test    al, al
        mov     dword ptr [edi + 0x14], 0x0
        jz      L_05ba
        mov     ecx, dword ptr [DAT_007f2464]
        push    ecx
        call    FUN_006f4950
        push    0x2c
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_05a8
        mov     edx, dword ptr [DAT_007f2440]
        push    edx
        mov     ecx, eax
        call    FUN_005d93b0
        mov     ebx, eax
        jmp     L_05aa
L_05a8:
        xor     ebx, ebx
L_05aa:
        mov     dword ptr [edi + 0x14], ebx
        call    FUN_006f49a0
        mov     eax, dword ptr [ebx]
        push    esi
        mov     ecx, ebx
        call    dword ptr [eax + 0x4]
L_05ba:
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x19]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x1a]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x1b]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        add     edi, 0x1c
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x8
        ret     0x4
    }
}
