/*
 * FUN_0040e4a0 (84 B) — __fastcall helper in the loader region (this in ECX).
 * If this+4 is set and this+0 is a non-empty string, builds a string object
 * (FUN_0041de80), calls FUN_0040e450, then tears it down (FUN_0041dec0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041de80(void);
extern void __cdecl FUN_0040e450(void);
extern void __cdecl FUN_0041dec0(void);

__declspec(naked) void FUN_0040e4a0(void)
{
    __asm {
        sub     esp, 0x34
        push    ebx
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi+4]
        xor     ebx, ebx
        cmp     al, bl
        jz      L_e4eb
        mov     edx, dword ptr [esi]
        cmp     edx, ebx
        jz      L_e4eb
        push    edi
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        dec     ecx
        mov     dword ptr [esp+0xc], ecx
        pop     edi
        jz      L_e4eb
        push    1
        push    edx
        lea     ecx, [esp+0x14]
        call    FUN_0041de80
        lea     eax, [esp+0xc]
        push    eax
        mov     ecx, esi
        call    FUN_0040e450
        lea     ecx, [esp+0xc]
        call    FUN_0041dec0
L_e4eb:
        mov     byte ptr [esi+4], bl
        pop     esi
        pop     ebx
        add     esp, 0x34
        ret
    }
}
