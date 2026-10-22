/*
 * FUN_00559810 (323 B) ??? Object method. Checks flags, dispatches
 * sound-related calls.
 *
 * __thiscall (ECX = this), no params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall func_00559810(void)
{
    

extern void __cdecl FUN_00559bb7(void);
extern void __cdecl FUN_1005534db(void);
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_00629216(void);
extern void __cdecl FUN_00644d81(void);
extern void __cdecl FUN_006291b3(void);
extern void __cdecl FUN_00642fc4(void);
extern void __cdecl FUN_00628c24(void);
extern int DAT_007dc6e0;
extern void __cdecl FUN_1004c3c2d(void);
__asm {
sub     esp, 0x10
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x6b4]
        test    eax, eax
        jz      L_end
        mov     al, byte ptr [esi + 0x584]
        test    al, al
        jnz     L_end
        mov     al, byte ptr [esi + 0x6bc]
        test    al, al
        jz      L_check2
        push    0x76
        call FUN_00559bb7
        pop     esi
        add     esp, 0x10
        ret
L_check2:
        mov     ecx, esi
        call FUN_1005534db
        test    al, al
        jz      L_end
        mov     al, byte ptr [esi + 0x584]
        test    al, al
        jnz     L_after_xor_check
        mov eax, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [eax]
        push    edi
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x40]
        xor     ecx, 0x85739531
        jz      L_skip_inner
        mov     ecx, dword ptr [eax + 0x40]
        push    ebx
        push    ebp
        push    3
        xor     ecx, 0x85739531
        call FUN_00629216
        mov     edx, dword ptr [esi + 0x6b4]
        mov     ecx, dword ptr [edx + 0x2c8]
        mov     dword ptr [esp + 0x10], ecx
        mov     ecx, dword ptr [edx + 0x2cc]
        mov     dword ptr [esp + 0x1c], ecx
        mov     ecx, dword ptr [edx + 0x2d0]
        mov     edx, dword ptr [edx + 0x2d4]
        mov     ebp, dword ptr [esp + 0x1c]
        mov     edi, edx
        push    edi
        mov     ebx, ecx
        push    ebx
        mov     dword ptr [esp + 0x20], ecx
        mov     ecx, dword ptr [esp + 0x18]
        push    ebp
        push    ecx
        mov     ecx, eax
        mov     dword ptr [esp + 0x24], edx
        call FUN_00644d81
        mov edx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [edx]
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x40]
        push    1
        xor     ecx, 0x85739531
        call FUN_006291b3
        mov     ecx, dword ptr [esp + 0x10]
        push    edi
        push    ebx
        push    ebp
        push    ecx
        mov     ecx, eax
        call FUN_00642fc4
        mov edx, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x40]
        push    1
        xor     ecx, 0x85739531
        call FUN_00628c24
        pop     ebp
        pop     ebx
L_skip_inner:
        mov ecx, dword ptr [DAT_007dc6e0]
        mov     edx, dword ptr [ecx + 0x48]
        mov     ecx, dword ptr [esi + 0x6b4]
        push    edx
        call FUN_1004c3c2d
        pop     edi
L_after_xor_check:
        mov     ecx, dword ptr [esi + 0x6b4]
        call    dword ptr [ecx + 0x1c]
        mov     byte ptr [esi + 0x584], 1
L_end:
        pop     esi
        add     esp, 0x10
        ret
    }


}
