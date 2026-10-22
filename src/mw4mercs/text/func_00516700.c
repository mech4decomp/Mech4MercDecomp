/*
 * FUN_00516700 (420 B) — Game state cleanup function
 * Frees campaign data and resets state fields.
 *
 * __fastcall (ECX = this pointer)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __cdecl FUN_005363b0(int arg);
void * __cdecl FUN_00517dd0(void *this);
void __cdecl FUN_004c8e90(int id);

__declspec(naked) void func_00516700(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007f1fb8;
extern int DAT_007f1fbc;
extern int DAT_007f1fc0;
extern int DAT_007f1fc4;
__asm {
push    esi
        mov     esi, ecx
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        mov ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [esi + 0x40EE8]
        xor     edx, ecx
        mov     ecx, dword ptr [edx + 0x0C]
        push    eax
        xor     ecx, 0x85739531
        call    FUN_005363b0
        mov     ecx, esi
        call    FUN_00517dd0
        mov edx, dword ptr [DAT_007dab40]
        mov     dword ptr [esi + 0x409A0], eax
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0x44]
        xor     edx, 0x85739531
        lea     eax, [ecx + 0x44]
        jz      skip_free_1
        mov     eax, dword ptr [eax]
        xor     eax, 0x85739531
        jz      skip_call_1
        mov     edx, dword ptr [eax]
        push    0x01
        mov     ecx, eax
        call    dword ptr [edx]
skip_call_1:
        push    0x11
        call    FUN_004c8e90
        add     esp, 0x04
skip_free_1:
        mov ecx, dword ptr [DAT_007f1fb8]
        xor     esi, esi
        cmp     ecx, esi
        jz      skip_free_2
        mov     eax, dword ptr [ecx]
        push    0x01
        call    dword ptr [eax]
        mov dword ptr [DAT_007f1fb8], esi
skip_free_2:
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [edx + 0x30]
        xor     ecx, 0x85739531
        lea     eax, [edx + 0x30]
        jz      skip_free_3
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        jz      skip_call_2
        mov     edx, dword ptr [ecx]
        push    0x01
        call    dword ptr [edx]
skip_call_2:
        push    0x0C
        call    FUN_004c8e90
        add     esp, 0x04
skip_free_3:
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [ecx + 0x3C]
        xor     edx, 0x85739531
        lea     eax, [ecx + 0x3C]
        jz      skip_free_4
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        jz      skip_call_3
        mov     eax, dword ptr [ecx]
        push    0x01
        call    dword ptr [eax]
skip_call_3:
        push    0x0F
        call    FUN_004c8e90
        add     esp, 0x04
skip_free_4:
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [edx + 0x34]
        xor     ecx, 0x85739531
        lea     eax, [edx + 0x34]
        jz      skip_free_5
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        jz      skip_call_4
        mov     edx, dword ptr [ecx]
        push    0x01
        call    dword ptr [edx]
skip_call_4:
        push    0x0D
        call    FUN_004c8e90
        add     esp, 0x04
skip_free_5:
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [ecx + 0x38]
        xor     edx, 0x85739531
        lea     eax, [ecx + 0x38]
        jz      skip_free_6
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        jz      skip_call_5
        mov     eax, dword ptr [ecx]
        push    0x01
        call    dword ptr [eax]
skip_call_5:
        push    0x0E
        call    FUN_004c8e90
        add     esp, 0x04
skip_free_6:
        mov ecx, dword ptr [DAT_007f1fbc]
        cmp     ecx, esi
        jz      skip_free_7
        mov     edx, dword ptr [ecx]
        push    0x01
        call    dword ptr [edx]
        mov dword ptr [DAT_007f1fbc], esi
skip_free_7:
        mov ecx, dword ptr [DAT_007f1fc0]
        cmp     ecx, esi
        jz      skip_free_8
        mov     eax, dword ptr [ecx]
        push    0x01
        call    dword ptr [eax]
        mov dword ptr [DAT_007f1fc0], esi
skip_free_8:
        mov ecx, dword ptr [DAT_007f1fc4]
        cmp     ecx, esi
        jz      skip_free_9
        mov     edx, dword ptr [ecx]
        push    0x01
        call    dword ptr [edx]
        mov dword ptr [DAT_007f1fc4], esi
skip_free_9:
        mov     eax, 0x01
        pop     esi
        ret
    }


}
