/*
 * FUN_005e05e0 (136 B) — __thiscall (ECX=this) helper that scans a collection
 * via obfuscated vtable dispatch, returns 1 if an element's type != 8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_004fca60(int a);
extern void *__stdcall FUN_004fd000(int a, int b);
extern int __stdcall FUN_005e0f70(void *a);

__declspec(naked) void __stdcall FUN_005e05e0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
mov eax, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [eax]
        mov edx, dword ptr [DAT_007dab40]
        push    esi
        push    edi
        mov     edi, ecx
        xor     eax, edx
        mov     ecx, dword ptr [eax + 0x10]
        push    0x2
        xor     ecx, 0x85739531
        xor     esi, esi
        call    FUN_004fca60
        test    eax, eax
        jle     L_65e
L_609:
        mov ecx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [ecx]
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x10]
        push    esi
        push    0x2
        xor     ecx, 0x85739531
        call    FUN_004fd000
        test    eax, eax
        jz      L_63c
        mov     edx, dword ptr [eax + 0x10]
        push    edx
        mov     ecx, edi
        call    FUN_005e0f70
        cmp     eax, 0x8
        jnz     L_663
L_63c:
        mov eax, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [eax]
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x10]
        push    0x2
        xor     ecx, 0x85739531
        inc     esi
        call    FUN_004fca60
        cmp     esi, eax
        jl      L_609
L_65e:
        pop     edi
        xor     al, al
        pop     esi
        ret
L_663:
        pop     edi
        mov     al, 0x1
        pop     esi
        ret
    }


}
