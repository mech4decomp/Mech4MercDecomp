/* FUN_0058FA00: Set visibility/activation flags on objects (100 B)
 * fastcall: ECX = this
 * Walks linked list starting at this+0x8f8, sets flags 0xC0 on object+0xd8,
 * calls vtable methods, sets 0x80 flag on child objects.
 */
__declspec(naked) void FUN_0058FA00(void)
{
    __asm {
        PUSH EDI
        MOV EDI, dword ptr [ECX + 0x8F8]   /* EDI = this->field_8F8 */
        TEST EDI, EDI
        JZ exit

        PUSH ESI
        MOV ESI, dword ptr [EDI + 0xD8]    /* ESI = *(EDI + 0xD8) */
        OR dword ptr [ESI + 0x18], 0xC0    /* set flags */
        MOV EAX, dword ptr [ESI]           /* vtable */
        MOV ECX, ESI
        CALL dword ptr [EAX + 0x10]        /* vtable[4]() */

        MOV EDX, dword ptr [ESI]           /* vtable */
        MOV ECX, ESI
        CALL dword ptr [EDX + 0x14]        /* vtable[5]() */

        MOV EAX, dword ptr [EDI + 0x124]   /* EAX = EDI->field_124 */
        TEST EAX, EAX
        MOV CL, 0x80
        POP ESI
        JZ check_next

        MOV DL, byte ptr [EAX + 0x9C]      /* DL = EAX->field_9C */
        TEST DL, CL
        JNZ check_next
        OR DL, CL
        MOV byte ptr [EAX + 0x9C], DL      /* set flag 0x80 */

check_next:
        MOV EDI, dword ptr [EDI + 0x128]   /* EDI = EDI->field_128 */
        TEST EDI, EDI
        JZ exit

        MOV AL, byte ptr [EDI + 0x9C]      /* AL = EDI->field_9C */
        TEST AL, CL
        JNZ exit
        OR AL, CL
        MOV byte ptr [EDI + 0x9C], AL      /* set flag 0x80 */

exit:
        POP EDI
        RET
    }
}
