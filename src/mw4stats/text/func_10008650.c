/*
 * MW4Stats.dll - FUN_10008650 (0x10008650, 20 B, __fastcall)
 * If (obj->count && obj->arr) call obj->arr->vfn4(obj->count).
 * Transcribed from MW4Stats.dll reference bytes.
 */

__declspec(naked) void FUN_10008650(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 4]
        test    eax, eax
        jz      L_ret
        mov     ecx, dword ptr [ecx]
        test    ecx, ecx
        jz      L_ret
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 4]
L_ret:
        ret
    }
}
