/*
 * FUN_00514A60 (extent 0x514A60-0x514AEF, 143 bytes) - UTIL in-.text block.
 * ret 0xc. Transcribed from capstone disasm.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int   *g_007dab44;

extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_006f4230(void);

__declspec(naked) void func_00514A60(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [eax]
        push    esi
        mov     esi, dword ptr [ecx]
        cmp     esi, 0x12
        jle     L_4a74
        xor     eax, eax
        pop     esi
        ret     0xc
L_4a74:
        test    esi, esi
        jge     L_4a7e
        xor     eax, eax
        pop     esi
        ret     0xc
L_4a7e:
        push    edi
        mov     edi, dword ptr [eax + 4]
        mov     eax, dword ptr [edi]
        test    eax, eax
        je      L_4a8e
        push    eax
        call    FUN_006f4230
L_4a8e:
        push    0
        push    0x80
        call    FUN_006f3c80
        mov     edx, eax
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [edi], edx
        xor     ecx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [ecx + 0x14]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x1814]
        mov     eax, esi
        shl     eax, 8
        add     eax, esi
        lea     eax, [eax + eax*2]
        mov     edi, dword ptr [ecx + eax*4 + 4]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        pop     edi
        mov     eax, 1
        pop     esi
        ret     0xc
    }
}
