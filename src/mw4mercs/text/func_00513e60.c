/*
 * FUN_00513E60 (191 B) — Check if any weapon slot is occupied
 * Counts how many fields in a structure (offsets 0xBC-0xE0) are not -1,
 * returns non-zero if any slot is occupied.
 *
 * __stdcall, RET 0xC
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_00513e60(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        push    esi
        push    edi
        xor ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [ecx + 0x0C]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x50]
        mov     edx, dword ptr [eax + 0xE0]
        mov     edi, dword ptr [eax + 0xDC]
        xor     ecx, ecx
        or      esi, -1
        cmp     edx, esi
        setnz   cl
        xor     edx, edx
        cmp     edi, esi
        setnz   dl
        mov     edi, dword ptr [eax + 0xD8]
        add     ecx, edx
        xor     edx, edx
        cmp     edi, esi
        setnz   dl
        mov     edi, dword ptr [eax + 0xD4]
        add     ecx, edx
        xor     edx, edx
        cmp     edi, esi
        setnz   dl
        mov     edi, dword ptr [eax + 0xD0]
        add     ecx, edx
        xor     edx, edx
        cmp     edi, esi
        mov     edi, dword ptr [eax + 0xCC]
        setnz   dl
        add     ecx, edx
        xor     edx, edx
        cmp     edi, esi
        mov     edi, dword ptr [eax + 0xC8]
        setnz   dl
        add     ecx, edx
        xor     edx, edx
        cmp     edi, esi
        mov     edi, dword ptr [eax + 0xC4]
        setnz   dl
        add     ecx, edx
        xor     edx, edx
        cmp     edi, esi
        mov     edi, dword ptr [eax + 0xC0]
        setnz   dl
        add     ecx, edx
        xor     edx, edx
        cmp     edi, esi
        mov     edi, dword ptr [eax + 0xBC]
        setnz   dl
        add     ecx, edx
        xor     edx, edx
        cmp     edi, esi
        setnz   dl
        pop     edi
        pop     esi
        add     ecx, edx
        neg     ecx
        sbb     ecx, ecx
        neg     ecx
        mov     eax, ecx
        ret     0x0C
    }


}
