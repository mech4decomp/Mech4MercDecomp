/*
 * FUN_005bad90 (183 B) — vtable/object update routine.
 *
 * __fastcall (ECX = this). Walks several cached objects, conditionally
 * calls FUN_00559be0(0x15), then does a virtual dispatch via vtable+0x60
 * and calls FUN_005fff60.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0041fd80(void);
extern void FUN_00415230(void);
extern void FUN_00559be0(void);
extern void FUN_005fff60(void);

__declspec(naked) void FUN_005bad90(void)
{
    

extern int DAT_007f26a4;
extern int DAT_007f1f84;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007f26b0;
__asm {
push    esi
        push    edi
        mov     edi, ecx
        lea     esi, [edi + 0x258]
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jz      L_f3
        mov     ecx, esi
        call    FUN_0041fd80
        mov ecx, dword ptr [DAT_007f26a4]
        push    ecx
        mov     ecx, dword ptr [eax + 0x4]
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L_f3
        mov     ecx, esi
        call    FUN_0041fd80
        mov     esi, dword ptr [eax + 0x280]
        test    esi, esi
        jz      L_f3
        mov eax, dword ptr [DAT_007f1f84]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L_f3
        mov     ecx, dword ptr [esi + 0x3b0]
        test    ecx, ecx
        jz      L_f3
        push    0x15
        call    FUN_00559be0
L_f3:
        mov eax, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov ecx, dword ptr [DAT_007f26b0]
        push    ecx
        mov     ecx, dword ptr [eax + 0x20]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x4]
        call    FUN_00415230
        test    al, al
        jz      L_44
        mov edx, dword ptr [DAT_007dab44]
        mov eax, dword ptr [DAT_007dab40]
        mov     esi, dword ptr [edx]
        xor     esi, eax
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0x60]
        mov     ecx, dword ptr [esi + 0x20]
        push    eax
        push    edi
        xor     ecx, 0x85739531
        call    FUN_005fff60
L_44:
        pop     edi
        pop     esi
        ret
    }


}
