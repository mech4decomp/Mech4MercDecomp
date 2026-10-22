/*
 * FUN_005bf240 (64 B) — __thiscall (ECX = this), RET 4 (one stack param).
 *
 * Reads a global pointer chain: if *(char*)((*(*DAT_007dab44 ^ DAT_007dab40)+0xc)
 * ^ 0x85739531)+0x17 is nonzero, calls FUN_004179b0(this+0x94, param). Otherwise
 * if param != 0, calls (*(param->vtable[0]))(1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004179b0(void);

__declspec(naked) void __stdcall FUN_005bf240(void *param)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
        mov eax, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [eax]
        xor edx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [edx + 0xc]
        xor     eax, 0x85739531
        mov     dl, byte ptr [eax + 0x17]
        test    dl, dl
        jz      L_5bf26f
        mov     edx, dword ptr [esp + 0x4]
        push    edx
        add     ecx, 0x94
        call    FUN_004179b0
        ret     4
    L_5bf26f:
        mov     ecx, dword ptr [esp + 0x4]
        test    ecx, ecx
        jz      L_5bf27d
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
    L_5bf27d:
        ret     4
    }


}
