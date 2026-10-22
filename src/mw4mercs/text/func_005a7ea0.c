/*
 * FUN_005a7ea0 (137 B) — Conditional initialization of sub-objects.
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_004f9400(void);
extern int __stdcall FUN_0041fd80(void);

__declspec(naked) void __stdcall FUN_005a7ea0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
        mov eax, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [eax]
        push    esi
        mov esi, dword ptr [DAT_007dab40]
        push    edi
        mov     edi, ecx
        xor     eax, esi
        mov     ecx, dword ptr [eax + 0x20]
        xor     ecx, 0x85739531
        call    FUN_004f9400
        test    al, al
        jz      label_done
        lea     esi, [edi + 0x180]
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jz      label_skip1
        mov     ecx, esi
        call    FUN_0041fd80
        mov     dword ptr [eax + 0x28], 0x3f800000
label_skip1:
        lea     esi, [edi + 0x188]
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jz      label_setflag
        mov     ecx, esi
        call    FUN_0041fd80
        mov     esi, dword ptr [eax + 0xd8]
        mov     ecx, dword ptr [esi + 0x18]
        mov     edx, dword ptr [esi]
        and     ecx, 0xffffffbf
        or      ecx, 0x80
        mov     dword ptr [esi + 0x18], ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x10]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
label_setflag:
        mov     byte ptr [edi + 0x194], 1
label_done:
        pop     edi
        pop     esi
        ret
    }


}
