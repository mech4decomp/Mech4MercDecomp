/*
 * FUN_005e0670 (243 B) — __thiscall (ECX=this, RET 4) collection scanner with
 * obfuscated vtable dispatch.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_004fca60(int a);
extern void *__stdcall FUN_004fd000(int a, int b);
extern void *__stdcall FUN_0041fd80(void);
extern char __stdcall FUN_00415230(void *a);
extern int __stdcall FUN_005e0f70(void *a);
extern int __stdcall FUN_00545460(void *a);

__declspec(naked) void __stdcall FUN_005e0670(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007dc88c;
extern int DAT_00788764;
__asm {
mov eax, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [eax]
        push    ebp
        mov     ebp, ecx
        mov ecx, dword ptr [DAT_007dab40]
        push    esi
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x10]
        push    edi
        push    0x2
        xor     ecx, 0x85739531
        xor     edi, edi
        call    FUN_004fca60
        test    eax, eax
        jle     L_745
L_69e:
        mov ecx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [ecx]
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x10]
        push    edi
        push    0x2
        xor     ecx, 0x85739531
        call    FUN_004fd000
        test    eax, eax
        jz      L_71e
        mov     esi, dword ptr [eax + 0x14]
        test    esi, esi
        jz      L_71e
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jz      L_71e
        mov     ecx, esi
        call    FUN_0041fd80
        mov ecx, dword ptr [DAT_007dc88c]
        push    ecx
        mov     ecx, dword ptr [eax + 0x4]
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L_71e
        mov     ecx, esi
        call    FUN_0041fd80
        mov     esi, eax
        cmp     byte ptr [ebp + 0x485], 0x1
        jnz     L_70c
        mov     edx, dword ptr [esi + 0x2c]
        push    edx
        mov     ecx, ebp
        call    FUN_005e0f70
        jmp     L_718
L_70c:
        mov     eax, dword ptr [esi + 0x2c]
        push    eax
        call    FUN_00545460
        add     esp, 0x4
L_718:
        cmp     eax, dword ptr [esp + 0x10]
        jz      L_74d
L_71e:
        mov ecx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [ecx]
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x10]
        push    0x2
        xor     ecx, 0x85739531
        inc     edi
        call    FUN_004fca60
        cmp     edi, eax
        jl      L_69e
L_745:
        pop     edi
        pop     esi
        xor     al, al
        pop     ebp
        ret     4
L_74d:
        mov eax, dword ptr [DAT_00788764]
        mov     edx, dword ptr [esi]
        push    0x1
        push    eax
        push    ebp
        mov     ecx, esi
        call    dword ptr [edx + 0x5c]
        pop     edi
        pop     esi
        pop     ebp
        ret     4
    }


}
